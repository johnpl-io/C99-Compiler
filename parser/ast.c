#include <stdio.h>
#include "ast.h"
#include <stdlib.h>
#include "parser.tab.h"
#include <ctype.h>
struct astnode *newNum(int nodetype, struct Num num) {
  
    struct astnode *numast = malloc(sizeof(struct astnode));
    numast->nodetype = nodetype;
    numast->num.number = num;
    numast->num.nodetype = nodetype;
    return numast;
}
struct astnode *newCharlit(int nodetype, char val) {
  
    struct astnode *numast = malloc(sizeof(struct astnode));
    numast->nodetype = nodetype;
    numast->charl.val = val;
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

void printoperator(int operator) {
    if(isprint(operator)) {
        printf("%c \n", operator); 
    } else {
   switch(operator) {
        case LTEQ:
            printf("Comparison OP <=\n"); break;
        case GTEQ:
            printf("Comparison OP >=\n"); break;
        case EQEQ:
            printf("Comparison OP ==\n"); break;
        case NOTEQ:
            printf("Comparsion OP !=\n"); break;
        case PLUSEQ:
            printf("Assignment OP +=\n"); break;
        case MINUSEQ:
            printf("Assignment OP -=\n"); break;
        case TIMESEQ:
            printf("Assignment OP *=\n"); break;
        case DIVEQ:
            printf("Assignment OP /=\n"); break;
        case MODEQ:
            printf("Assignment OP %%=\n"); break;
        case SHLEQ:
            printf("Assignment OP <<=\n"); break;
        case SHREQ:
            printf("Assignment OP >>=\n"); break;
        case ANDEQ:
            printf("Assignment OP &=\n"); break;
        case XOREQ:
            printf("Assignment OP ^=\n"); break;
        case OREQ:
            printf("Assignment OP |=\n"); break;
        case LOGOR:
            printf("Logical OP ||\n"); break;
        case LOGAND:
            printf("Logical OP &&\n"); break;
        case SIZEOF:
            printf("SIZEOF\n"); break;
        case POSTINC:
            printf("POSTINC\n"); break;
        case POSTDEC: 
            printf("POSTDEC\n"); break;
        case SHL:
            printf("SHL\n"); break;
        case SHR:
            printf("SHR\n"); break;
        default:
            printf("Invalid character\n"); break;
    }
    }
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
            printf("BINOP ");
            printoperator(ast->binop.operator);
            astwalk_impl(ast->binop.left, depth + 1);
            astwalk_impl(ast->binop.right, depth + 1);
            break;
        case AST_NODE_TYPE_TENOP:
            printf("TENOP \n");
            printf("IF:\n"); astwalk_impl(ast->tenop.left, depth + 1);
            printf("THEN:\n");  astwalk_impl(ast->tenop.middle,depth + 1);
             printf("ELSE:\n"); astwalk_impl(ast->tenop.right, depth + 1);
            break;
        case AST_NODE_TYPE_UNOP:
                printf("UNOP ");
             printoperator(ast->unop.operator);
            astwalk_impl(ast->unop.left, depth + 1);
            astwalk_impl(ast->unop.right, depth + 1);
            break;
        case AST_NODE_TYPE_NUM:
          printf("NUM ");
          switch (ast->num.number.type) {
    case INT_SIGNED:
        printf("INT_SIGNED %lld\n", (long long)ast->num.number.integer);
        break;
    case INT_LONG:
        printf("INT_LONG %ld\n", (long)ast->num.number.integer);
        break;
    case INT_LONGLONG:
        printf("INT_LONGLONG %lld\n", (long long)ast->num.number.integer);
        break;
    case INT_UNSIGNED:
        printf("INT_UNSIGNED %llu\n", ast->num.number.integer);
        break;
    case INT_ULONG:
        printf("INT_ULONG %lu\n", (unsigned long)ast->num.number.integer);
        break;
    case INT_ULONGLONG:
        printf("INT_ULONGLONG %llu\n", ast->num.number.integer);
        break;
    case FLOATV:
        printf("FLOATV %Lf\n", ast->num.number.fvalue);
        break;
    case DOUBLEV:
        printf("DOUBLEV %lf\n", (double)ast->num.number.fvalue);
        break;
    case DOUBLE_LONG:
        printf("DOUBLE_LONG %Lf\n", ast->num.number.fvalue);
        break;
    default:
        printf("Invalid type %d\n", ast->num.number.type);
        break;
}
            break;
        case AST_NODE_TYPE_IDENT:
            printf("IDENT %s\n", ast->ident.string);
            break;
        case AST_NODE_TYPE_CHARLIT:
            printf("CHARLIT %c\n", ast->charl.val);
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

