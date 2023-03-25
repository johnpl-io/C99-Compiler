#include <stdio.h>
#include "ast.h"
#include <stdlib.h>
#include "parser.tab.h"
#include "symbtab.h"
#include <ctype.h>
 extern int lineno;

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

struct astnode *newDeclar(int nodetype, char *ident) {
    struct astnode *a = malloc(sizeof(struct astnode));
    a->nodetype = nodetype;
    a->decl.ident = ident;
    a->head = a;
    return a;
    
}

struct astnode *newTenop(int nodetype, struct astnode *l, struct astnode *m, struct astnode *r) {
       struct astnode *a = malloc(sizeof(struct astnode));
    a->nodetype = nodetype;
    a->tenop.left = l;
    a->tenop.middle = m;
    a->tenop.right = r;
    return a;
}
//creates a new struct or union an
struct astnode *newStructUnion(int nodetype, char *name, struct symboltab *minitable) {
struct astnode *a = malloc(sizeof(struct astnode));
    if(nodetype == STRUCT) {
        a->nodetype = AST_NODE_TYPE_STRUCT;
    } else if (nodetype == UNION) {
        a->nodetype = AST_NODE_TYPE_UNION;
    }
 a->structunion.minitable = minitable;
 a->structunion.name = name;
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
    if(nodetype == AST_NODE_TYPE_LL) {
  
     //   printf("astnode %p \n", astnode->ll.head);
            //printf("astnode    next %s \n", next->ident.string);
        n->ll.head = astnode->ll.head;
      
        n->nodetype = AST_NODE_TYPE_LL;
        n->ll.data = next;
         astnode->ll.next = n;
    } else {
        n = next;
        n->head = astnode->head;
        
        switch(astnode->nodetype) {
            case AST_NODE_TYPE_DECL:
                astnode->decl.next = n;
                break;
            case AST_NODE_TYPE_ARRAYDCL:
                            astnode->arraydecl.next = n;
                break;
            case AST_NODE_TYPE_POINTER:
                astnode->ptr.next = n;
                break;
            case AST_NODE_TYPE_FNDCL:
                astnode->fndcl.next = n;
                break;
        }

    }
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
        case AST_NODE_TYPE_UNION:
            declspecs->declspec.typespecif = val;
            declspecs->declspec.storageclass = -1;
            break;
        case AST_NODE_TYPE_STRUCT:
        declspecs->declspec.typespecif = val;
         declspecs->declspec.storageclass = -1;
            break;
        case AST_NODE_TYPE_SCALAR:
            declspecs->declspec.typespecif = val;
             declspecs->declspec.storageclass = -1;
            break;
        case AST_NODE_TYPE_QUALIFIER:
        
            declspecs->declspec.typequal = val->qualifier.types;
             declspecs->declspec.storageclass = -1;
            break;
        default:
   
            break;
    }
    return declspecs;
    
}

struct astnode *newArrayDecl(struct astnode *size) {
       struct astnode *ArrayDecl = malloc(sizeof(struct astnode));
       ArrayDecl->nodetype = AST_NODE_TYPE_ARRAYDCL;
       ArrayDecl->arraydecl.array_size = size;
       return ArrayDecl; 
}

struct astnode *newFunctDecl(struct astnode *parameters) {
    struct astnode *funcDecl = malloc(sizeof(struct astnode));
    funcDecl->nodetype = AST_NODE_TYPE_FNDCL;
    funcDecl->fndcl.parameters = parameters;
    return  funcDecl;
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
           
                if(l->nodetype == AST_NODE_TYPE_STORAGE) {
                     if(r->declspec.storageclass != -1) {
                    printf("Error Multiple Storage Class \n");
                } else {
                    a->declspec.storageclass = l->storage.types;
                }
       
            } else {
                a->declspec.storageclass = r->declspec.storageclass;
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
            } else {
                a->declspec.typespecif = r->declspec.typespecif;
            }
            if(l->nodetype == AST_NODE_TYPE_STRUCT || l->nodetype == AST_NODE_TYPE_UNION) {
                //assume u cant have void, int, char struct as this makes no sense will check in standard
                //for exact reference
                printf("hi");
                if(r->declspec.typespecif) {
                    fprintf(stderr, "two or more data types in declaration specifiers. %d \n", lineno);
                } else {
                    a->declspec.typespecif = l;
                }

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
        case AST_NODE_TYPE_FNDCL:
            printf("FUNCTION DECL \n");
            astwalk_impl(ast->fndcl.next, depth +1);
      
            break;
        case AST_NODE_TYPE_ARRAYDCL:
            printf("ARRAY OF SIZE "); 
            astwalk_impl(ast->arraydecl.array_size, depth+1);
             astwalk_impl(ast->arraydecl.next, depth+1);
        break;
        case AST_NODE_TYPE_DECL:
            printf("DECL NAME ");
           
                 printf("%s \n", ast->decl.ident);
        astwalk_impl(ast->decl.next, depth+1);
        break;
        case AST_NODE_TYPE_POINTER:
                printf("pointer to\n");
             astwalk_impl(ast->ptr.next, depth+1);
            break;
        case AST_NODE_TYPE_DECLSPEC:
            printf("DECL SPECS");
            printf(" | Storage Class %d | Type qualifier %d | \n", ast->declspec.storageclass, ast->declspec.typequal);
           
            printf("Typspecifiers \n"); astwalk_impl(ast->declspec.typespecif, depth + 1);
            break;
        case AST_NODE_TYPE_SCALAR:
            switch (ast->scal.types) {
                case INT:
                    printf("int\n");
                    break;
                case VOID:
                    printf("void\n");
                    break;
                case LONG:
                    printf("long\n");
                    break;
                case SHORT:
                    printf("short\n");
                    break;
                case FLOAT:
                    printf("float\n");
                    break;
                case DOUBLE:
                    printf("double\n");
                    break;
                case SIGNED:
                    printf("signed\n");
                    break;
                case UNSIGNED:
                    printf("unsigned\n");
                    break;
                default:
                    printf("unknown data type\n");
                    break;
            }
            astwalk_impl(ast->scal.next, depth + 1);
        break;
        case AST_NODE_TYPE_STRUCT:
            printf("STRUCT %s \n", ast->structunion.name);
           astwalk_impl(ast->structunion.next, depth + 1);
           break;
           case AST_NODE_TYPE_UNION:
            printf("UNION %s \n", ast->structunion.name);
           astwalk_impl(ast->structunion.next, depth + 1);
           break;
        default:
            printf("Unknown node type\n %d", ast->nodetype) ;
            break;
    }
}
