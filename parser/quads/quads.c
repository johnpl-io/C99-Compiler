#include <stddef.h>
#include "quads.h"
#include "../ast.h"
#include <stdlib.h>
#include "../parser.tab.h"
#include <stdio.h>
#include <string.h>
#define DIRECT 1
#define INDIRECT 0
struct basic_block *cur_bb; //current basic block
struct basic_block *head_bb; //head of linked list of basic block 
struct basic_block *gen_quads(struct astnode *stmtlist){
 struct astnode *llstmtlist = stmtlist->ll.head;
 //create current basic block keep  
    head_bb = malloc(sizeof (struct basic_block));
    head_bb->regidcount = 0;
    cur_bb = head_bb;

 while(llstmtlist != NULL) { 
    
    struct astnode *curstmt = llstmtlist->ll.data;
 if(curstmt) { //because declaration is stored as null (parser.y line 475
   gen_stmt(curstmt);

 }

 llstmtlist = llstmtlist->ll.next;
 }

}
 void gen_stmt(struct astnode *stmt) {
     switch(stmt->nodetype)  {
       case AST_NODE_TYPE_BINOP:
        if(stmt->binop.operator == '=') {
            printf("general assignment \n");
        astwalk_impl(stmt->binop.right, 0);
         gen_rvalue(stmt->binop.right, NULL);
        }
       break;
       default:
       fprintf(stderr, "stmt no supported yet s%d \n", stmt->nodetype);
       break;
    }

 }
int get_opcode(struct astnode *opcode) {
    switch(opcode->binop.operator) {
        case '+':
            return ADD_OC;
            break;
        case '-':
            return SUB_OC;
            break;
        case '*':
            return MULT_OC;
            break;
        case '%':
            return MOD_OC;
            break;
        case '/':
            return DIV_OC;
        break;
        default:
        fprintf(stderr, "binop %d not supprted yet \n", opcode->binop.operator);

    }
    return -1;
   
}

struct generic_node *gen_rvalue(struct astnode *rexpr, struct generic_node *addr) {
    struct generic_node *target = malloc(sizeof(struct generic_node)); //designate target 
   switch(rexpr->nodetype) {
    case AST_NODE_TYPE_IDENT: 
        if(!rexpr->ident.symbol) {
         printf("undeclared variable\n");
        //check types
        } else {
          //check if it is a scalar variable 
           if( rexpr->ident.symbol->var.type->nodetype == AST_NODE_TYPE_DECLSPEC) {
           target->types = VARIABLE_TYPE;
           target->ident_symbol = rexpr->ident.symbol;
           target->value.ident = strdup(rexpr->ident.string);
            return target;
           } else {
            fprintf(stderr, "UHOHH! IDENT CASE ");
           }
        }

    
    break;
    case AST_NODE_TYPE_NUM: 
        if(rexpr->num.number.type == INT_SIGNED || rexpr->num.number.type == INT_UNSIGNED) {
                target->types = IMMEDIATE_TYPE;
                target->value.immediate = rexpr->num.number.integer;
               return target;
        }
     break;

    case AST_NODE_TYPE_BINOP: 
           //type checking would take place before this to ensure that left and right types are proper
            struct generic_node *left = gen_rvalue(rexpr->binop.left, NULL);
            struct generic_node *right = gen_rvalue(rexpr->binop.right, NULL);
            
            if(!addr) {

              addr = new_temporary(); 
             
            } 

                     emit_quads(get_opcode(rexpr), left, right, addr);     
           
            return addr;
        break;
    case AST_NODE_TYPE_UNOP:
     fprintf(stderr, "here");
       if(rexpr->unop.operator == '*') //pointer deference
    {
       struct generic_node * address = gen_rvalue(rexpr->unop.right, NULL);
       if(!addr) {
        addr = new_temporary();
       }
       emit_quads(LOAD_OC, address, NULL, addr);
       return addr;
    }
        break;
    default:
        fprintf(stderr, "PROBLEM!! %d");
    break;

}

}
struct generic_node *gen_lvalue(struct astnode *lexpr, int *mode){
 switch(lexpr->nodetype) {
    case AST_NODE_TYPE_IDENT: {
    //check symbol thgen insert 
        *mode = DIRECT;


    }
    case AST_NODE_TYPE_NUM:
    case AST_NODE_TYPE_UNOP:

 }
}
//generates new temporaring register and returns
struct generic_node *new_temporary() {
struct generic_node *target = malloc(sizeof(struct generic_node));

target->value.regid = cur_bb->regidcount++; //increment counter
target->types = REGISTER_TYPE;
 
return target;

}
void emit_quads(int opcode, struct generic_node *src1, struct generic_node *src2, struct generic_node *result) {
struct quad *quad = malloc(sizeof (struct quad));

quad->opcode = opcode;
quad->result = result;
quad->src1 = src1;
quad->src2 = src2;
if(!cur_bb->listquadbeg) {
    cur_bb->listquadbeg = quad;
     cur_bb->listquadend = quad;
}
else {
    //append quad to end of list 
    cur_bb->listquadend->next = quad;
}

print_quads(quad);
printf("\n");
};
 

 //TODO: ARRAYS [NEED SIZE OF TYPES]
 //TODO: CONTROL FLOW BLOCKS 
void print_genericnode(struct generic_node *generic_node) {
    if(generic_node) {
  switch(generic_node->types) {
    case REGISTER_TYPE :
        printf("T%d ", generic_node->value.regid); break;
    case IMMEDIATE_TYPE :
       printf("%d ", generic_node->value.immediate); break;
    case VARIABLE_TYPE :
     printf("%s  ", generic_node->value.ident); break;
    default:
  }
    }
}

void print_quads(struct quad *quad) {
 print_genericnode(quad->result); 
printf(" %s  ",opcode_to_string(quad->opcode));
print_genericnode(quad->src1);
printf(", ");
print_genericnode(quad->src2);
 
}
char* opcode_to_string(enum opcode op) {
    switch (op) {
        case LOAD_OC:
            return "LOAD";
        case STORE_OC:
            return "STORE";
        case LEA_OC:
            return "LEA";
        case MULT_OC:
            return "MULT";
        case ADD_OC:
            return "ADD";
        case SUB_OC:
            return "SUB";
        case DIV_OC:
            return "DIV";
        case MOD_OC:
            return "MOD";
        case MOV_OC:
            return "MOV";
        case LOGAND_OC:
            return "LOGAND";
        case LOGOR_OC:
            return "LOGOR_OC";
        case LOGNOT_OC:
            return "LOGNOT_OC";
        case NOT_OC:
            return "NOT_OC";
        case AND_OC:
            return "AND_OC";
        case OR_OC:
            return "OR_OC";
        case SHL_OC:
            return "SHL_OC";
        case SHR_OC:
            return "SHR_OC";
        case XOR_OC:
            return "XOR_OC";
        case CMP_OC:
            return "CMP_OC";
        case LTEQ_OC:
            return "LTEQ_OC";
        case GTEQ_OC:
            return "GTEQ_OC";
        case LT_OC:
            return "LT_OC";
        case GT_OC:
            return "GT_OC";
        case EQEQ_OC:
            return "EQEQ_OC";
        case NTEQ_OC:
            return "NTEQ_OC";
        case CALL_OC:
            return "CALL_OC";
        case RET_OC:
            return "RET_OC";
        default:
            return "UNKNOWN_OC";
    }
}

void print_basicblock(struct basic_block *basic_block) {

}