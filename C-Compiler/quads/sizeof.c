#include "../parser/ast.h"
#include "../parser/symbtab.h"
#include <limits.h>
//get size of astnode for 32 bit

int sizeof_ast(struct astnode *node) {
	switch(node->nodetype) {
		case AST_NODE_TYPE_POINTER:
        case AST_NODE_TYPE_FNDCL:
			return 4;
		case AST_NODE_TYPE_ARRAYDCL:
            if(node->arraydecl.array_size->num.number.type == INT_SIGNED || node->arraydecl.array_size->num.number.type == INT_UNSIGNED ) {
                    return ((node->arraydecl.array_size->num.number.integer)*sizeof_ast(node->arraydecl.next));
            }
		case AST_NODE_TYPE_DECLSPEC:
    	     switch(node->declspec.typespecif_res) {
    		     case CHAR:
    			     return 1;
    		     case SHORT:
    			     return 2;
    		     case INT:
    		     case FLOAT:
    			     return 4;
                case LONG:
                    return 4;
                case LONG_LONG:
                    return 8;
                case DOUBLE:
                    return 8;
                case LONG_DOUBLE:
                    return 16;


    	     }   
        
         break;
  


 }
return -1;
	}

