#include <stdio.h>
#include "ast.h"
#include <stdlib.h>
struct astnode *newNum(int nodetype, int num) {
  
    struct astnode *numast = malloc(sizeof(struct astnode));
    numast->nodetype = nodetype;
    numast->num.number = num;
    numast->num.nodetype = nodetype;
    return numast;
}

struct astnode *newIdent(int nodetype, char *ident) { 
    struct astnode *identast = malloc(sizeof(struct astnode));
       identast->nodetype = nodetype;
    identast->ident.string = ident;
    identast->ident.nodetype = nodetype;
    return identast;
}



 struct astnode *newast(int nodetype, struct astnode *l, struct astnode *r) {
    struct astnode *a = malloc(sizeof(struct astnode));
    a->nodetype = nodetype;

    switch (nodetype) {
        case AST_NODE_TYPE_BINOP:
            a->binop.left = l;
            a->binop.right = r;
            break;
    case AST_NODE_TYPE_TENOP:
            a->tenop.left = l;
            a->tenop.right = r;
            break;

        case AST_NODE_TYPE_UNOP:
            a->unop.left = l;
            a->unop.right = r;
            break;



        // add more cases as needed for other node types

        default:
            fprintf(stderr, "Invalid node type %d\n", nodetype);
            exit(1);
    }

return a;


}
static void astwalk_impl(struct astnode *ast, int depth) {
    if (!ast) {
        return;
    }
    for (int i = 0; i < depth; i++) {
        printf("  ");
    }
    switch (ast->nodetype) {
        case AST_NODE_TYPE_BINOP:
            printf("BINOP %c\n", ast->binop.operator);
            astwalk_impl(ast->binop.left, depth + 1);
            astwalk_impl(ast->binop.right, depth + 1);
            break;
        case AST_NODE_TYPE_TENOP:
            printf("TENOP %c\n", ast->tenop.operator);
            astwalk_impl(ast->tenop.left, depth + 1);
            astwalk_impl(ast->tenop.right, depth + 1);
            break;
        case AST_NODE_TYPE_UNOP:
            printf("UNOP %c\n", ast->unop.operator);
            astwalk_impl(ast->unop.left, depth + 1);
            astwalk_impl(ast->unop.right, depth + 1);
            break;
        case AST_NODE_TYPE_NUM:
            printf("NUM %d\n", ast->num.number);
            break;
        case AST_NODE_TYPE_IDENT:
            printf("IDENT %s\n", ast->ident.string);
            break;
        default:
            printf("Unknown node type\n");
            break;
    }
}


int main() {
    struct astnode *a = newNum( AST_NODE_TYPE_NUM,2);
    struct astnode *b = newNum( AST_NODE_TYPE_NUM,1);
    struct astnode *plus = newast(AST_NODE_TYPE_BINOP, a, b);
    plus->binop.operator = '+';
   astwalk_impl(plus, 0);
}