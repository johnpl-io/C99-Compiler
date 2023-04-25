#include <stddef.h>
#include "quads.h"
#include "ast.h"
struct basic_block *gen_quads(struct astnode *stmtlist){
 struct astnode *llstmtlist = stmtlist->ll.head; 
 while(llstmtlist != NULL) { 
    struct astnode *curstmt = llstmtlist->ll.data;
 
    switch(curstmt->nodetype)  {
       case AST_NODE_TYPE_BINOP:
        if(curstmt->binop.operator == '=') {
            printf("general assignment");
        }
       break;
    }

  
 llstmtlist = llstmtlist->ll.next;
 }
 return;
 }

 //general assign
 //gen_r value
 //gen_l value

 