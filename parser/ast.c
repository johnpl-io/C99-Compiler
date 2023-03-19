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
    return a;
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


struct astnode *newType(int nodetype, int type) {
    struct astnode *ast = malloc(sizeof(struct astnode));
    ast->nodetype = nodetype;

    switch (nodetype) {
        case AST_NODE_TYPE_SCALAR:
            ast->scal.types = type;
            break;
        case AST_NODE_TYPE_STORAGE:
            ast->storage.types = type;
            break;
        case AST_NODE_TYPE_QUALIFIER:
            if(type == CONST){
                ast->qualifier.types = 0b001;
            } 
            if(type == VOLATILE) {
                 ast->qualifier.types = 0b010;
            }
            if(type == RESTRICT) {
                ast->qualifier.types = 0b100;
            }
            break;
        case AST_NODE_TYPE_POINTER:
            // no need to set type for pointers
            break;
        default:
            // handle invalid nodetype here
            break;
    }
    return ast;
}







struct astnode *newDecl(int nodetype, struct astnode *val){
    struct astnode *declspecs = malloc(sizeof(struct astnode));
    declspecs->nodetype = nodetype;
    switch(val->nodetype) {
        case AST_NODE_TYPE_STORAGE:
            declspecs->declspec.storageclass = val->storage.types;
            break;
        case AST_NODE_TYPE_SCALAR:
            declspecs->declspec.typespecif = val;
            break;
        case AST_NODE_TYPE_QUALIFIER:
            declspecs->declspec.typequal = val->qualifier.types;
            break;
        default:
            break;
    }
    return declspecs;
    
}

struct astnode *newArrayDecl(struct astnode *size) {
       struct astnode *ArrayDecl = malloc(sizeof(struct astnode));
       ArrayDecl->nodetype = 25;
       ArrayDecl->arraydecl.array_size = size;
       return ArrayDecl; 

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
        case AST_NODE_TYPE_QUALIFIER:
            a->qualifier.types = l->qualifier.types | r->qualifier.types;
        break;
        case AST_NODE_TYPE_DECLSPEC:
            // Making sure that an ident doesn't have two storage classes
            // we're checking if r (old) is a declspec with a storage class
            if(r->declspec.storageclass != -1) {
                if(l->nodetype == AST_NODE_TYPE_STORAGE) {
                    printf("Error Multiple Storage Class \n");
                } else {
                    a->declspec.storageclass = r->declspec.storageclass;
                }
            // if r (old) doesnt have a storage class, but l (new) does
            } else {
                if(l->nodetype == AST_NODE_TYPE_STORAGE){
                    a->declspec.storageclass = l->nodetype;
                }
            // if r and l both dont have storage classes, do nothing
            }
            
            //check type qualifier
            if(l->nodetype == AST_NODE_TYPE_QUALIFIER) {
                // bitwise or bitfields for qualifier types
                a->declspec.typequal = l->qualifier.types | r->declspec.typequal;
            } else {
                a->declspec.typequal = r->declspec.typequal;
            }
            
        // append type qualifier names
            if (l->nodetype == AST_NODE_TYPE_SCALAR) {
                // type-qualifier name to append
                // get head of the type specifier list
                struct astnode *head = r->declspec.typespecif;
                // traverse to the end of the list
              /*  while (head && head->scal.next) {
                    head = head->scal.next;
                }
                // append new type qualifier node
                if (head) {
                    head->scal.next = l;
                } else {
                    r->declspec.typespecif = l;
                }
                */
                // update a->declspec.typespecif with the modified type specifier list
                //a->declspec.typespecif = r->declspec.typespecif;
                if(head) {
                    l->scal.next = head;
                }
                a->declspec.typespecif = l;
            }
            
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

void declcomb(struct astnode *ptrchain, struct astnode *decl) {
    struct astnode *temp = ptrchain;
    while (temp->ptr.next) {
        temp = temp->ptr.next;
    }
    temp->ptr.next = decl;
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
            if(ast->fn.ll) {
                 printf("PARAMETERS \n");
            struct astnode *ll_node = ast->fn.ll->ll.head;
            while (ll_node != NULL) {
                astwalk_impl(ll_node->ll.data, depth + 1);
                ll_node = ll_node->ll.next;
            }
            }
            break;
        case AST_NODE_TYPE_LL:
        printf("LINKED LIST \n");
        struct astnode *ll_nodell = ast->ll.head;
            int count = 0;
            while (ll_nodell != NULL) {
                astwalk_impl(ll_nodell->ll.data, depth + 1);
                ll_nodell = ll_nodell->ll.next;
           
            }
     
            break;
        case 25:
            printf("ARRAY OF SIZE "); 
            astwalk_impl(ast->arraydecl.array_size, depth+1);
             astwalk_impl(ast->arraydecl.next, depth+1);
        
        break;
         case AST_NODE_TYPE_POINTER:
            printf("pointer to\n");
             astwalk_impl(ast->ptr.next, depth+1);
            break;
        default:
            printf("Unknown node type\n %d", ast->nodetype) ;
            break;
    }
}

