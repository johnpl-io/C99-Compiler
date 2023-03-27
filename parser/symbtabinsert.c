#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "parser.tab.h"
#include "symbtab.h"
#include "ast.h"
#include "symbtabinsert.h"

void symbent_combine(struct astnode *declspecs, struct astnode *declars, int lineno, char *filename_buf, struct symbtab *symbtab){

    //extract correct storage class tytpe qualifier //check if type specifier is struct 
    char *name;
    struct astnode *type;
    int strgclass;
    bool isFunc;
   
    if( declspecs->declspec.typespecif->nodetype == AST_NODE_TYPE_STRUCT)  {
    
     struct symbol *test = create_symbol_entry(declspecs->declspec.typespecif->structunion.name, SYMB_STRUCT_UNION_TAG, NAMESPACE_TAG, lineno, filename_buf);
    struct symbol *lookup = symbtab_lookup_all(symbtab, test);
      
        if(lookup){
               declspecs->declspec.typespecif = lookup->struct_union_tag.type;
        }
        else {
        define_struct(declspecs->declspec.typespecif, symbtab, lineno, filename_buf, false, declspecs->declspec.typespecif->structunion.name);
       }
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
        } else {
            switch (type->nodetype){
                // check if function
                case AST_NODE_TYPE_FNDCL:
                    //is function
                    isFunc = true;
                    break;
                //is a function 

                // default is variable
                default:
                        isFunc = false;
                    break;
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
                define_func(type, symbtab, lineno, filename_buf, strgclass, name);
            } else {
                define_var(type, symbtab, lineno, filename_buf, strgclass, name);
            }
        
            ll_nodell = ll_nodell->ll.next;
           
        }
       // print_symbtab(symbtab);
    }

//void symbent_struct()