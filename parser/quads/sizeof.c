#include "../ast.h"
#include "../symbtab.h"
//get size of astnode
int sizeof_ast(struct astnode *node) {
    switch(node->nodetype) {
        case AST_NODE_TYPE_POINTER:
            return 8;
        case AST_NODE_TYPE_ARRAYDCL:
        case AST_NODE_TYPE_DECLSPEC:
            
        case AST_NODE_TYPE_FNDCL:

    }
}