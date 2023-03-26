#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "parser.tab.h"
#include "symbtab.h"
#include "ast.h"
#include "symbtabinsert.h"

void symbent_combine(struct astnode *declspecs, struct astnode *declars, int lineno, char *filename_buf, struct symbtab *symbtab){
    //extract correct storage class type qualifier 
    char *name;
    struct astnode *type;
    int strgclass;
    bool isFunc;
   
    //extract storage class check for semantics error
    strgclass = declspecs->declspec.storageclass;

    struct astnode *ll_nodell = declars->ll.head;
    while (ll_nodell != NULL) {

        // get head of decl
        struct astnode *headdecl =  ll_nodell->ll.data->head;
        struct astnode *taildecl =  ll_nodell->ll.data;
        name =  headdecl->decl.ident;
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
                astwalk_impl(headdecl, 0);
                switch(taildecl->nodetype) {
                    case AST_NODE_TYPE_POINTER:
                        taildecl->ptr.next = declspecs;
                        break;
                    case AST_NODE_TYPE_DECL:
                          taildecl->decl.next = declspecs;
                        break;
                    default:
                       
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
     print_symbtab(symbtab);
    }
