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

struct astnode *newTenop(int nodetype, struct astnode *l, struct astnode *m, struct astnode *r) {
       struct astnode *a = malloc(sizeof(struct astnode));
    a->nodetype = nodetype;
    a->tenop.left = l;
    a->tenop.middle = m;
    a->tenop.right = r;
}

struct astnode *insertElementorig(int nodetype, struct astnode *astnode) {
    struct astnode *n = malloc(sizeof(struct astnode));

 printf("hi");
        n->ll.head = n;
        n->ll.data = astnode;

        
            n->nodetype = AST_NODE_TYPE_LL;
    return n;
}
struct astnode *insertElement(int nodetype, struct astnode *astnode, struct astnode *next) {
    struct astnode *n = malloc(sizeof(struct astnode));
     //   printf("astnode %p \n", astnode->ll.head);
            //printf("astnode    next %s \n", next->ident.string);
        n->ll.head = astnode->ll.head;
      
        n->nodetype = AST_NODE_TYPE_LL;
        n->ll.data = next;
         astnode->ll.next = n;
            
    return n;
}

struct astnode *newast(int nodetype, struct astnode *l, struct astnode *r, int operator) {
    struct astnode *a = malloc(sizeof(struct astnode));
    a->nodetype = nodetype;

    switch (nodetype) {
        case AST_NODE_TYPE_BINOP:
            a->binop.left = l;
            a->binop.right = r;
            a->binop.operator = operator;
            break;

        case AST_NODE_TYPE_TENOP:
            a->tenop.left = l;
            a->tenop.right = r;
            break;

        case AST_NODE_TYPE_UNOP:
            a->unop.left = l;
            a->unop.right = r;
            a->unop.operator = operator;
            break;
          case AST_NODE_TYPE_FN:
            a->fn.left = l;
            a->fn.ll = r;
            break;
        
        // add more cases as needed for other node types

        default:
            fprintf(stderr, "Invalid node type %d\n", nodetype);
            exit(1);
    }

return a;


}
void astwalk_impl(struct astnode *ast, int depth) {
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
            astwalk_impl(ast->tenop.middle,depth + 1);
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
        case AST_NODE_TYPE_CHARLIT:
            printf("CHARLIT %c\n", ast->num.number);
            break;
        case AST_NODE_TYPE_STRING:
            printf("STRING %s\n", ast->ident.string);
            break;
        case AST_NODE_TYPE_FN:
            printf("FN\n");
            astwalk_impl(ast->fn.left, depth + 1);
            struct astnode *ll_node = ast->fn.ll->ll.head;
            while (ll_node != NULL) {
                astwalk_impl(ll_node->ll.data, depth + 1);
                ll_node = ll_node->ll.next;
            }
            break;
                
        default:
            printf("Unknown node type\n");
            break;
    }
}

