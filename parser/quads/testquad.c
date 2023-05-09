#include <stddef.h>
#include "quads.h"
#include "../ast.h"
#include <stdlib.h>
#include "../parser.tab.h"
#include <stdio.h>
#include <string.h>
#include "../symbtab.h"
#include "sizeof.h"
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
       gen_assign(stmt);
        }
       break;
       case AST_NODE_TYPE_LL: 
       printf("{ } statement\n");
       
       break;

       default:
       fprintf(stderr, "stmt no supported yet s%d \n", stmt->nodetype);
       break;
    }

 }
 struct generic_node *new_immediate(int value) {
    struct generic_node *target = malloc(sizeof(struct generic_node));
                    target->types = IMMEDIATE_TYPE;
                target->value.immediate = value;
                return target;
 }
 struct astnode *demote_array(struct astnode *declspec) {
        struct astnode *newptr = newType(AST_NODE_TYPE_POINTER, 0);
        newptr->ptr.next = declspec->arraydecl.next;
        return newptr;
 }
//this function checks left and right emits mult if necessary promotes and demotes arrays
struct generic_node* check_type(struct generic_node** left, struct generic_node** right, int get_opcode) {
               if((*left)->declspec->nodetype == AST_NODE_TYPE_ARRAYDCL){
                fprintf(stderr, "ARRAY HERE");
                (*left)->declspec = demote_array((*left)->declspec);
                exit(-1);
               }
    switch (get_opcode) {

        case '+': //check for ptr addition
            if ((*left)->declspec->nodetype == AST_NODE_TYPE_POINTER && (*right)->declspec->nodetype == AST_NODE_TYPE_DECLSPEC) {
                if ((*right)->declspec->declspec.typespecif_res == INT) {
                    struct generic_node* location = new_temporary();
                    int sizeofleft = sizeof_ast((*left)->declspec->ptr.next);
                    struct generic_node *mult_val = new_immediate(sizeofleft);
                    emit_quads(MULT_OC, *right, mult_val, location);
                    location->declspec = (*left)->declspec;
                    *right = location;
                    return;
                }
            }

            if ((*right)->declspec->nodetype == AST_NODE_TYPE_POINTER) {
                if ((*left)->declspec->declspec.typespecif_res == INT) {
                    struct generic_node* location = new_temporary();
                    int sizeofright = sizeof_ast((*right)->declspec->ptr.next);
                    struct generic_node *mult_val = new_immediate(sizeofright);
                    emit_quads(MULT_OC, *left, mult_val, location);
                    location->declspec = (*right)->declspec;
                    *left = location;
                    return;
                }
            }
            break;
        case '-':
            if ((*left)->declspec->nodetype == AST_NODE_TYPE_POINTER && (*right)->declspec->nodetype == AST_NODE_TYPE_POINTER) {
                struct generic_node *temp = new_temporary();
                emit_quads(SUB_OC, *left, *right, temp);
                   int sizeofleft = sizeof_ast((*left)->declspec->ptr.next);
                    struct generic_node *size_val = new_immediate(sizeofleft);
                emit_quads(DIV_OC, temp,  size_val, temp);
                *right = *left = temp;
                return;
            }
        break;  //check for ptr subtraction
        case '*':
        case '/':
        case '%':
         if((*right)->declspec->nodetype == AST_NODE_TYPE_POINTER || (*left)->declspec->nodetype == AST_NODE_TYPE_POINTER) {
                fprintf(stderr, "Error with pointer operation using '%c\n", get_opcode);
         }
        break;


        // add other cases for different operations here

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
           switch(rexpr->ident.symbol->var.type->nodetype) { //probably should check if it a function call 
            case AST_NODE_TYPE_DECLSPEC: {
           target->types = VARIABLE_TYPE;
           target->declspec= rexpr->ident.symbol->var.type;
           target->value.ident = strdup(rexpr->ident.string);
            return target;
           
           }  
           case AST_NODE_TYPE_POINTER:
           {
            target->types = VARIABLE_TYPE;
           target->declspec = rexpr->ident.symbol->var.type;
           target->value.ident = strdup(rexpr->ident.string);
            return target;
           }
           case AST_NODE_TYPE_ARRAYDCL:
           {
    
            struct generic_node *temp = new_temporary();
            target->types = VARIABLE_TYPE;
           target->declspec = rexpr->ident.symbol->var.type;
           target->value.ident = strdup(rexpr->ident.string);
              emit_quads(LEA_OC, target, NULL , temp);
              temp->declspec = target->declspec;
           
             temp->declspec = target->declspec;
              return temp;
           }
        
        

           default:
           
            fprintf(stderr, "UHOHH! IDENT CASE NOT SUPPORTED YET %d\n ", rexpr->ident.symbol->var.type->nodetype);
          astwalk_impl(rexpr->ident.symbol->var.type, 0);
           break;
           }
        }

    
    break;
    case AST_NODE_TYPE_NUM: 
        if(rexpr->num.number.type == INT_SIGNED || rexpr->num.number.type == INT_UNSIGNED) {
                target->types = IMMEDIATE_TYPE;
                target->value.immediate = rexpr->num.number.integer;
                struct astnode *declspecs = malloc(sizeof(struct astnode));
              declspecs->nodetype = AST_NODE_TYPE_DECLSPEC;
               declspecs->declspec.typespecif_res = INT;
                 target->declspec = declspecs;
               return target;
        }
     break;

    case AST_NODE_TYPE_BINOP: 
           //type checking would take place before this to ensure that left and right types are proper
        
            
            struct generic_node *left = gen_rvalue(rexpr->binop.left, NULL);
                
             //   astwalk_impl(left->declspec, 0);
            struct generic_node *right = gen_rvalue(rexpr->binop.right, NULL);
                 check_type(&left, &right, rexpr->binop.operator);
            if(!addr) {

              addr = new_temporary(); 
             
            } 
                     if(left != right) {
                              emit_quads(get_opcode(rexpr), left, right, addr);   
                     } else {
                        emit_quads(MOV_OC, left, NULL, addr);
                     }
                     
                 addr->declspec = left->declspec;
            return addr;
        break;
    case AST_NODE_TYPE_UNOP:
        printf("%c", rexpr->unop.operator );
       if(rexpr->unop.operator == '*') //pointer deference
    {
        
       struct generic_node * address = gen_rvalue(rexpr->unop.right, NULL);
       if(!addr) {
        addr = new_temporary();
       }    
       if(address->declspec->nodetype == AST_NODE_TYPE_DECLSPEC) {
        fprintf(stderr, "Error deferencing pointer type incompotabile.\n");
       }
       if(address->declspec->nodetype == AST_NODE_TYPE_POINTER) {
            if(!address->declspec->ptr.next) {
              fprintf(stderr, "Error with deferencing pointer.\n");
            } else {
               addr->declspec = address->declspec->ptr.next;
            }
            
       }
       emit_quads(LOAD_OC, address, NULL, addr);
      F
     
      
     
    
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
    //check symbol thgen insert //probably should check if symbol exists as well 
        *mode = DIRECT;
        struct generic_node *target = malloc(sizeof(struct generic_node));
            target->types = VARIABLE_TYPE;
           target->declspec = lexpr->ident.symbol->var.type;
           target->value.ident = strdup(lexpr->ident.string);
            return target;

    }
    case AST_NODE_TYPE_NUM: {
        return NULL;
    }
    case AST_NODE_TYPE_UNOP: {
        
        if(lexpr->unop.operator == '*') {
            *mode = INDIRECT;
            fprintf(stderr, "hrere\n");
            return gen_rvalue(lexpr->unop.right, NULL);
        }
    }

 }
}
//generates new temporaring register and returns
struct generic_node *new_temporary() {
struct generic_node *target = malloc(sizeof(struct generic_node));

target->value.regid = cur_bb->regidcount++; //increment counter
target->types = REGISTER_TYPE;
 
return target;

}

struct generic_node *gen_assign(struct astnode *expr) {
    int destmode;
    struct generic_node *dst = gen_lvalue(expr->binop.left, &destmode);
    if(!dst) {
        printf("error");
    }
    if(destmode == DIRECT) {
        struct generic_node *test = gen_rvalue(expr->binop.right, dst);
    
        if((expr->binop.right->nodetype != 0) && (expr->binop.right->nodetype != AST_NODE_TYPE_UNOP) ) {
            if((expr->binop.left->nodetype != 0) && (expr->binop.left->nodetype != AST_NODE_TYPE_UNOP))
           dst->declspec = test->declspec;
            emit_quads(MOV_OC, test, NULL, dst);
          
        }

    } else {
       emit_quads(STORE_OC, gen_rvalue(expr->binop.right, NULL), dst, NULL);

    }
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