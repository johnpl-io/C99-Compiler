#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "parser.tab.h"
#include "symbtab.h"
#include "ast.h"
#include "symbtabinsert.h"

void symbent_combine(struct astnode *declspecs, struct astnode *declars, int lineno, char *filename_buf, struct symbtab *curscope){

    //extract correct storage class tytpe qualifier //check if type specifier is struct 
    char *name;
    struct astnode *type;
    int strgclass;
    bool isFunc = false;
    bool isArr = false;
    bool isNeither = false;
    bool isPtr = false;
    bool isStruct = false;
     struct symbol *lookup;
    
    if( declspecs->declspec.typespecif->nodetype == AST_NODE_TYPE_STRUCT)  {
            isStruct = true;
     struct symbol *test = create_symbol_entry(declspecs->declspec.typespecif->structunion.name, SYMB_STRUCT_UNION_TAG, NAMESPACE_TAG, lineno, filename_buf);
        lookup = symbtab_lookup_all(curscope, test);
   
    }          
    // check if type struct
    // do lookup and see if struct already exists in symbtab
    // if it doesn't exist in the symbtab, and we aren't defining it, it's in the form struct a *b( check if pointer if not, error)
    // install into symbtab
    
        
        
    //extract storage class check for semantics error
    strgclass = declspecs->declspec.storageclass;

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
        if(isStruct) {
            
        if(lookup){
            printf("found it");
            if(isPtr) {  
               declspecs->declspec.typespecif = lookup->struct_union_tag.type;
            } else {
                    printf("got ya");
            }
        }
        else {
            if(isPtr) { 
        define_struct(declspecs->declspec.typespecif, curscope, lineno, filename_buf,declspecs->declspec.typespecif->structunion.name);
            } else {
               fprintf(stderr, "%s: %d : Error Variable has incomplete definition of struct %s \n", "standard in", lineno, declspecs->declspec.typespecif->structunion.name);
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
       // print_symbtab(symbtab);
    }

void symbent_combinesu(struct astnode *declspecs, struct astnode *declars, int lineno, char *filename_buf, struct symbtab *structscope, struct symbtab *curscope) {
    //properly place struct tags in curscope but everything else in struct scope 
    //it is the same as the one above with minor modifications
    // check if declspec is struct

    // if it is struct look up if it is exists and if it is defined in struct scope first and then if it does not exist in curscope
}