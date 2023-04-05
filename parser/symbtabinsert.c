#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "parser.tab.h"
#include "symbtab.h"
#include "ast.h"
#include "symbtabinsert.h"
void symbent_combine(struct astnode *declspecs, struct astnode *declars, int lineno, char *filename_buf, struct symbtab *curscope, struct symbtab *outscopeforstruct){

    //extract correct storage class tytpe qualifier //check if type specifier is struct 
    char *name;
    struct astnode *type;
    int strgclass;
    bool isFunc = false;
    bool isArr = false;
    bool isNeither = false;
    bool isPtr = false;
    bool isStruct = false;
    bool isInsideStruct = false;
    bool isAnonStructdefine = false;
     struct symbol *lookup;
     struct symbol *structlookup; 
   
    if(!declspecs->declspec.typespecif) {
        declspecs->declspec.typespecif = newType(AST_NODE_TYPE_SCALAR, INT);
    }
    if( declspecs->declspec.typespecif->nodetype == AST_NODE_TYPE_STRUCT)  {
            isStruct = true;
            if(outscopeforstruct) {
                printf("struct in struct");
                 isInsideStruct  = true;
                structlookup = outscopeforstruct;
            } else {
                structlookup = curscope; 
            }
            if(!declspecs->declspec.typespecif->structunion.name && declspecs->declspec.typespecif->structunion.is_complete ) {
                isAnonStructdefine = 1;
            }  else {
   
     struct symbol *test = create_symbol_entry(declspecs->declspec.typespecif->structunion.name, SYMB_STRUCT_UNION_TAG, NAMESPACE_TAG, lineno, filename_buf);
        
        
        lookup = symbtab_lookup_all(structlookup , test);
            }
   
    }          
    // check if type struct
    // do lookup and see if struct already exists in symbtab
    // if it doesn't exist in the symbtab, and we aren't defining it, it's in the form struct a *b( check if pointer if not, error)
    // install into symbtab
    
        
        
    //extract storage class check for semantics error

    
 

    struct astnode *ll_nodell = declars->ll.head;
    while (ll_nodell != NULL) {

        // get head of decl
        struct astnode *headdecl =  ll_nodell->ll.data->head;
        struct astnode *taildecl =  ll_nodell->ll.data;
        name =  headdecl->decl.ident;
        //loop through to set proper structs and check for errors
        if (!(type = headdecl->decl.next)){
            isFunc = false;
            isNeither = true;
        } else {
            switch (type->nodetype){
                // check if function
                case AST_NODE_TYPE_FNDCL:
                    //is function
                    isFunc = true;
                    break;
                case AST_NODE_TYPE_ARRAYDCL:
                    isArr = true;
                    break;
                case AST_NODE_TYPE_POINTER:
              
                    isPtr = true;
                    break;

                // default is variable
                default:
                 
                        isFunc = false;
                    break;
            }
        }



        //here 
 
    if(curscope->scope == SCOPE_GLOBAL) {
        if(declspecs->declspec.storageclass == -1) {
                declspecs->declspec.storageclass = EXTERN_S;
        } else if(!(declspecs->declspec.storageclass == EXTERN_S  || declspecs->declspec.storageclass == STATIC_S )) {
            fprintf(stderr, "error storage class not valid in global scope\n");
             exit(-1);
        }
   }
    
    if(curscope->scope == SCOPE_FUNCTION || curscope->scope == SCOPE_BLOCK) {
        if(declspecs->declspec.storageclass == -1 && !isFunc) {
            declspecs->declspec.storageclass = AUTO_S;
            
        } if(declspecs->declspec.storageclass == -1 && isFunc) {
            declspecs->declspec.storageclass = EXTERN_S;
        }
    }
   strgclass = declspecs->declspec.storageclass;
        if(isStruct && !isAnonStructdefine) {
            
        if(lookup){ 
           printf("found it");
            if(isPtr) {  
               declspecs->declspec.typespecif = lookup->struct_union_tag.type;
            } else {
              if(lookup->struct_union_tag.type->structunion.is_complete) {
                 declspecs->declspec.typespecif = lookup->struct_union_tag.type;
                printf("I am complete");
              } else {
                fprintf(stderr, "Error incomplete struct declared \n");
                exit(-1);
              }
            }
        }
        else {
            if(isPtr) { 
        define_struct(declspecs->declspec.typespecif, structlookup , lineno, filename_buf,declspecs->declspec.typespecif->structunion.name, false);
            } else {
               fprintf(stderr, "%s: %d : Error Variable has incomplete definition of struct %s \n", "standard in", lineno, declspecs->declspec.typespecif->structunion.name);
             //  print_symbtab(structlookup);
               exit(-1);
            }
       }
        }
            if(type) {
                //second element of list
                
                switch(taildecl->nodetype) {
                    case AST_NODE_TYPE_POINTER:
                        taildecl->ptr.next = declspecs;
                        break;
                    case AST_NODE_TYPE_DECL:
                          taildecl->decl.next = declspecs;
                          break;
                    case AST_NODE_TYPE_FNDCL:
                            taildecl->fndcl.next = declspecs;
                            break;
                   case AST_NODE_TYPE_ARRAYDCL:
                        taildecl->arraydecl.next = declspecs;
                    
                        break;
                    default:
                       printf("UHOH %d", taildecl->nodetype);
                        break;
                }
            } else {
                type = declspecs;
            }

            if (isFunc){
                //append types //no checking yet 
                define_func(type, curscope, lineno, filename_buf, strgclass, name);
            } else {
                define_var(type, curscope, lineno, filename_buf, strgclass, name);
            }
        
            ll_nodell = ll_nodell->ll.next;
           
        }
        

        //print_symbtab(curscope);
    }
//function for placing parameter list inside of function scope

void symbent_combine_fn(struct astnode *fn_parameters, int lineno, char *filename_buf, struct symbtab *curscopefn) {
         struct astnode *fn_decl = fn_parameters->head;
         if(!fn_decl->decl.next) {
         fprintf(stderr, "Expecting a function. \n");
         exit(-1);
        }
        if(fn_decl->decl.next->nodetype != AST_NODE_TYPE_FNDCL) {
        fprintf(stderr, "Expecting a function. \n");
         exit(-1);
        }   
      struct astnode *fn_parameterlist = fn_decl->decl.next->fndcl.parameters;
       if(!fn_parameterlist) {
           return; 
      }
       struct astnode *ll_nodell = fn_parameterlist->ll.head;
            while (ll_nodell != NULL) {
                struct astnode *declspecs =  ll_nodell->ll.data->declaration.declspec;
                struct astnode *declarator = ll_nodell->ll.data->declaration.decl;
        
      symbent_combine(declspecs, insertElementorig(AST_NODE_TYPE_LL, declarator), lineno, filename_buf, curscopefn, NULL);

               ll_nodell = ll_nodell->ll.next;
             
           }
 //wrapper to check symbol table entry insertion for struct   

}
void symbent_struct(struct struct_stack *curstruct_scope, struct symbtab *table, int lineno, char *filename_buf, char * name, bool replace) {
 struct symbol *test = create_symbol_entry( curstruct_scope->astnode->structunion.name, SYMB_STRUCT_UNION_TAG, NAMESPACE_TAG, lineno, filename_buf);   
struct symbol *lookup = symbtab_lookup_all(table , test); //look up existance of struct 
if(lookup) {
   if((!lookup->struct_union_tag.type->structunion.is_complete) && lookup->struct_union_tag.type->structunion.isbeing_defined) {
        printf("not allowed");
       return;
    }

     if(!lookup->struct_union_tag.type->structunion.is_complete && !lookup->struct_union_tag.type->structunion.isbeing_defined) { 
        printf("finishing");
        curstruct_scope->astnode  = lookup->struct_union_tag.type; 
      return;
    }
}
    define_struct(curstruct_scope->astnode, table, lineno, filename_buf, name, false);
}
//dealing with struct a; where struct a hides outer scope with undefined incomplete definition
void symbent_struct_reset(struct astnode *declspecs, int lineno, char *filename_buf, struct symbtab *curscope) {
 if(!declspecs->declspec.typespecif) {
        return;
    }
    if( declspecs->declspec.typespecif->nodetype == AST_NODE_TYPE_STRUCT)  {
        if(declspecs->declspec.typespecif->structunion.is_complete)
 {
    return;
 }
       define_struct(declspecs->declspec.typespecif, curscope , lineno, filename_buf ,declspecs->declspec.typespecif->structunion.name, false);

    }          
    //otherwise we do not care such as int; 
    }          
