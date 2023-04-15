#include <stdio.h>
#include "ast.h"
#include <stdlib.h>
#include "parser.tab.h"
#include "symbtab.h"
#include <ctype.h>
 extern int lineno;
extern struct symbtab *current_scope;
extern struct symbtab *current_functionscope;
 extern char filename_buf[256];
char * filename(char * filename) {
    if (filename[0] == '\0') {

        return "<standard in>";
    }
    else return filename;
}
const char* storage_class_string(int storage_class) {
    const char* storage_class_names[] = {
        "typedef",
        "extern",
        "static",
        "auto",
        "register"
    };
    if (storage_class >= 0 && storage_class < 5) {
        return storage_class_names[storage_class];
    } else {
        return "Not applicable";
    }
}

const char* qualifier_types_string(int qualifier_types) {
    switch (qualifier_types) {
        case 0b0000:
            return "Not applicable";
        case 0b0010:
            return "CONST";
        case 0b0100:
            return "VOLATILE";
        case 0b1000:
            return "RESTRICT";
        case 0b0110:
            return "CONST VOLATILE";
        case 0b1010:
            return "CONST RESTRICT";
        case 0b1100:
            return "VOLATILE RESTRICT";
        case 0b1110:
            return "CONST VOLATILE RESTRICT";
        default:
            return "Unknown qualifier type";
    }
}
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
    
     struct symbol *test = create_symbol_entry(ident, SYMB_VARIABLE_NAME, NAMESPACE_ALT, lineno, filename_buf);
    identast->ident.symbol = symbtab_lookup_all(current_scope, test);
        printf("%d", current_scope->scope);
        if(current_functionscope) 
          printf("%d", current_functionscope->scope );
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
//creates a new struct or union it has redundant file name and line no that are also in the symbol for debugging
struct astnode *newStructUnion(int nodetype, char *name, struct symbtab *minitable, char *filename, int lineno, int isBeingDefined) {
    struct astnode *a = malloc(sizeof(struct astnode));
        if(nodetype == STRUCT) {
            a->nodetype = AST_NODE_TYPE_STRUCT;
        } else if (nodetype == UNION) {
            a->nodetype = AST_NODE_TYPE_UNION;
        }
    a->structunion.minitable = minitable;
    a->structunion.name = name;
    a->structunion.filename = filename;
    a->structunion.lineno = lineno;
    a->structunion.isbeing_defined = isBeingDefined;
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
     struct astnode *temp = malloc(sizeof(struct astnode));
     int flag = 0;
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
   if(next->nodetype == AST_NODE_TYPE_POINTER) {
             temp = next;
            while(temp->ptr.next != NULL) {
                temp->ptr.next->head = astnode->head;
                temp = temp->ptr.next;
            }
            temp->head = astnode->head;
            flag = 1;
        }
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
          if(n->nodetype == AST_NODE_TYPE_FNDCL) {
            fprintf(stderr, "%s:%d function cannot return a function\n", filename(filename_buf), lineno);

          }
                break;
        }

    }
    if(flag == 1) {
        return temp;
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
                ast->qualifier.types = 0b0010;
               
            } 
            if(type == VOLATILE) {
                 ast->qualifier.types = 0b0100;
            }
            if(type == RESTRICT) {
                ast->qualifier.types = 0b1000;
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

struct astnode *newDeclaration(int nodetype, struct astnode *declspecs, struct astnode *declar) {
    struct astnode *declaration = malloc(sizeof(struct astnode));
    declaration->nodetype = nodetype;
    declaration->declaration.declspec = declspecs;
    declaration->declaration.decl = declar;
    return declaration;
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

struct astnode *newifelse(struct astnode *IF, struct astnode *THEN, struct astnode *ELSE) {
    struct astnode *ifelse = malloc(sizeof(struct astnode));
    ifelse->nodetype = AST_NODE_TYPE_IFELSE;
    ifelse->ifelse.IF = IF;
     ifelse->ifelse.THEN = THEN;
    ifelse->ifelse.ELSE = ELSE;
    return ifelse;

}

struct astnode *newswitch(struct astnode *expr, struct astnode *body) {
    struct astnode *switchstmt = malloc(sizeof(struct astnode));
    switchstmt->nodetype = AST_NODE_TYPE_SWITCH;
    switchstmt->switchstmt.expr = expr;
    switchstmt->switchstmt.expr = body;
    return switchstmt;
}

struct astnode *newwhile(int isdoWhile, struct astnode *expr, struct astnode *stmt) {
       struct astnode *whilestmt = malloc(sizeof(struct astnode));
       whilestmt->nodetype = AST_NODE_TYPE_WHILE;
       whilestmt->whilestmt.expression = expr;
       whilestmt->whilestmt.body = stmt;
       whilestmt->whilestmt.isdowhile = isdoWhile;
       return whilestmt;
}

struct astnode *newfor(struct astnode *init, struct astnode *cond,  struct astnode *incr, struct astnode *body) {
     struct astnode *forstmt = malloc(sizeof(struct astnode));
        forstmt->nodetype = AST_NODE_TYPE_FOR;
        forstmt->forstmt.init = init;
        forstmt->forstmt.body = body;
        forstmt->forstmt.cond = cond;
        forstmt->forstmt.incr = incr;
        return forstmt;
}

struct astnode *newBreak() {
        struct astnode *breakstmt = malloc(sizeof(struct astnode));
        breakstmt->nodetype = AST_NODE_TYPE_BREAK;
        breakstmt->breakstmt.type = BREAK;
        return breakstmt;
};
struct astnode *newReturn(struct astnode *expr) {
     struct astnode *returnstmt = malloc(sizeof(struct astnode));
    returnstmt->returnstmt.statement = expr;
    return returnstmt;

};
struct astnode *newContinue() {
        struct astnode *continuestmt = malloc(sizeof(struct astnode));
        continuestmt->nodetype = AST_NODE_TYPE_CONTINUE;
        continuestmt->continuestmt.type = CONTINUE;
        return continuestmt;
};
struct astnode *newCase(struct astnode *condexpr, struct astnode *stmt) {
      struct astnode *casestmt = malloc(sizeof(struct astnode));
      casestmt->caselabel.cond_expr = condexpr;
      casestmt->caselabel.statement =  stmt;
      return casestmt;
};

struct astnode *newDefault(struct astnode *stmt) {
     struct astnode *defaultstmt = malloc(sizeof(struct astnode));
      defaultstmt->defaultlabel.statement = stmt;
      return defaultstmt;;
}
struct astnode *newLabel(char *ident, struct astnode *stmt) {
      struct symbol *test = create_symbol_entry(ident, SYMB_LABEL, SCOPE_FUNCTION, lineno, filename_buf);
      struct symbol *lookup;
      lookup = symbtab_lookup_current(current_functionscope, test);
      


      
};
struct astnode *newGoTo(char *ident) {

};
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
                if(r->declspec.typespecif) {
                    fprintf(stderr, "%s:%d two or more data types in declaration specifiers. %d \n", filename(filename_buf), lineno);
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
        case SHL:                printf("I am complete");
            printf("SHL\n"); break;
        case SHR:
            printf("SHR\n"); break;
        default:
            printf("Invalid character\n"); break;
    }
    }
}
void print_spaces(int depth) {
    
   for (int i = 0; i < depth; i++) {
        printf("  ");
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
            if(ast->ident.symbol) {
                if(ast->ident.symbol->attr_type == SYMB_FUNCTION_NAME) {
                    printf("stab_fn name=%s def @%s:%d\n ",ast->ident.string,  filename(ast->ident.symbol->filename_buf), ast->ident.symbol->lineno);
                }
                if(ast->ident.symbol->attr_type == SYMB_VARIABLE_NAME)
                    printf("stab_var name=%s def @%s:%d\n ",ast->ident.string,  filename(ast->ident.symbol->filename_buf), ast->ident.symbol->lineno);
            } else {
            printf("IDENT %s\n", ast->ident.string);
            }

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
        printf("LINKED LIST {\n");
    
        struct astnode *ll_nodell = ast->ll.head;
            int count = 0;
            
            while (ll_nodell != NULL) {
                astwalk_impl(ll_nodell->ll.data, depth + 1);
                ll_nodell = ll_nodell->ll.next;
           
            }
          print_spaces(depth); printf("}\n");
            break;
        case AST_NODE_TYPE_FNDCL:
            printf("FUNCTION DECL RETURNING :\n");
            astwalk_impl(ast->fndcl.next, depth +1);
            print_spaces(depth);
            printf("FUNCTION PARAMETERS (BE WARY THE DECL IS NOT THE HEAD) : \n");
            if(!ast->fndcl.parameters) {
              print_spaces(depth);  printf("unknown arguments \n");
            }
             astwalk_impl(ast->fndcl.parameters, depth +1);
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
            printf(" | Storage Class  : %s | Type qualifier : %s | \n", storage_class_string(ast->declspec.storageclass), qualifier_types_string(ast->declspec.typequal));
                print_spaces(depth);
            printf("Typspecifiers [ \n"); astwalk_impl(ast->declspec.typespecif, depth + 1);     print_spaces(depth);  printf(" ]\n");
            break;
        case AST_NODE_TYPE_SCALAR:
            switch (ast->scal.types) {
                case INT:
                    printf("int\n");
                    break;
                case CHAR:
                    printf("char\n");
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
            printf("STRUCT %s ", ast->structunion.name);
         //   if(ast->structunion.minitable) {
                     print_spaces(depth);
                if(!ast->structunion.is_complete) {
                printf("(incomplete)");
                    if(ast->structunion.isbeing_defined) {
                        printf(" is being defined at %s:%d \n", filename(ast->structunion.filename), ast->structunion.lineno);
                    }
                } else {
                    printf("defined at %s %d \n", ast->structunion.filename, ast->structunion.lineno);
                }
           // printf("    SYMBOL TABLE FOR STRUCT \n");

        // print_symbtab(ast->structunion.minitable);
          //         printf("   END OF SYMBOL TABLE FOR STRUCT \n"); 
       //     }
           break;
           case AST_NODE_TYPE_UNION:
                printf("UNION %s ", ast->structunion.name);
         //   if(ast->structunion.minitable) {
                     print_spaces(depth);
                if(!ast->structunion.is_complete) {
                printf("(incomplete)");
                    if(ast->structunion.isbeing_defined) {
                        printf(" is being defined at %s:%d \n", filename(ast->structunion.filename), ast->structunion.lineno);
                    }
                } else {
                    printf("defined at %s %d \n", ast->structunion.filename, ast->structunion.lineno);
                }
           astwalk_impl(ast->structunion.next, depth + 1);
           break;
           case AST_NODE_TYPE_DECLARATION:
           printf("DECLARATION \n");
           astwalk_impl(ast->declaration.declspec, depth + 1);
              astwalk_impl(ast->declaration.decl, depth + 1);
           break;
           case AST_NODE_TYPE_IFELSE:
           printf("IF STATEMENT \n");
        print_spaces(depth);    printf(" IF:\n"); astwalk_impl(ast->ifelse.IF, depth + 1);
         print_spaces(depth);     printf(" THEN:\n");  astwalk_impl(ast->ifelse.THEN, depth + 1);
           print_spaces(depth);    printf(" ELSE:\n"); astwalk_impl(ast->ifelse.ELSE, depth + 1);
            break;
            case AST_NODE_TYPE_FOR:
              printf("FOR\n");
         print_spaces(depth);     printf(" INIT:\n"); astwalk_impl(ast->forstmt.init, 0);
         print_spaces(depth);     printf(" COND: \n"); astwalk_impl(ast->forstmt.cond, 0);
        print_spaces(depth);        printf(" BODY: \n"); astwalk_impl(ast->forstmt.body, 0);
         print_spaces(depth);        printf(" INCR: \n"); astwalk_impl(ast->forstmt.incr, 0);
        break;
        default:
            printf("Unknown node type %d \n", ast->nodetype) ;
            break;
    }
}
