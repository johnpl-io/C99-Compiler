#include <stddef.h>
#include "quads.h"
#include "ast.h"
#include <stdlib.h>
#include "parser.tab.h"
#include <stdio.h>
struct basic_block *cur_bb; //current basic block
struct basic_block *head_bb; //head of linked list of basic blocks
struct basic_block *gen_quads(struct astnode *stmtlist){
 struct astnode *llstmtlist = stmtlist->ll.head;
 //create current basic block keep  
 while(llstmtlist != NULL) { 

    struct astnode *curstmt = llstmtlist->ll.data;
 if(curstmt) { //because declaration is stored as null (parser.y line 475
    switch(curstmt->nodetype)  {
       case AST_NODE_TYPE_BINOP:
        if(curstmt->binop.operator == '=') {
            printf("general assignment");
        }
       break;
       default:
       printf("node not supposred %d", curstmt->nodetype);
       break;
    }

 }
 llstmtlist = llstmtlist->ll.next;
 }

 return;
 }

 
struct generic_node *gen_rvalue(struct astnode *rexpr, struct generic_node *addr) {
    struct generic_node *target = malloc(sizeof(struct generic_node)); //designate target 
    if(rexpr->nodetype == AST_NODE_TYPE_IDENT) {
        if(!rexpr->ident.symbol) {
         //   fprintf(stderr, "%s:%d Undeclared variable '%s' " );

        } else {
           target->types = VARIABLE_TYPE;
           target->ident_symbol = rexpr->ident.symbol;
           target->value.ident = strdup(rexpr->ident.string);
            return target;
        }

    }
    if(rexpr->nodetype == AST_NODE_TYPE_NUM) {
        if(rexpr->num.number.type == INT_SIGNED || rexpr->num.number.type == INT_UNSIGNED) {
                target->types = IMMEDIATE_TYPE;
                target->value.immediate = rexpr->num.number.integer;
               return target;
        }
    }
    if(rexpr->nodetype == AST_NODE_TYPE_BINOP) {
           //type checking would take place before this to ensure that left and right types are proper
            struct generic_node *left = gen_rvalue(rexpr->binop.left, NULL);
            struct generic_node *right = gen_rvalue(rexpr->binop.right, NULL);
            if(!target) {
             //  target = new_temporary(); //function to create temporary register
            } 
            emit_quads(rexpr->nodetype, left, right, target);
    }
}
struct generic_node *gen_lvalue(struct astnode *lexpr, int *mode){

}
emit_quads(int nodetype, struct generic_node *src1, struct generic_node *src2, struct generic_node *result) {

//TODO: ADD NODETYPE TO OPCODE 
//HAVE A LIST OF QUADS AND APPEND IT IN THE CURRENT BASIC BLOCK

};
 

 //TODO: ARRAYS [NEED SIZE OF TYPES]
 //TODO: CONTROL FLOW BLOCKS 