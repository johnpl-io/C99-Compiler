#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "parser.tab.h"
#include "symbtab.h"
#include "ast.h"
#include "symbtabinsert.h"
#include "quads/sizeof.h"
extern lineno;
extern filename_buf;
void symbent_combine(struct astnode *declspecs, struct astnode *declars, int lineno, char *filename_buf, struct symbtab *curscope, struct symbtab *outscopeforstruct){

    //extract correct storage class tytpe qualifier //check if type specifier is struct 
    char *name = NULL;
    struct astnode *type;
    int strgclass;
    bool isFunc = false;
    bool isArr = false;
    bool isNeither = false;
    bool isPtr = false;
    bool isStruct = false;
    bool isUnion = false;
    bool isInsideStruct = false;
    bool isAnonStructdefine = false;
     struct symbol *lookup;
     struct symbol *structlookup;  //maybe wrong type !
    
    
    
    if(!declspecs->declspec.typespecif) {
        declspecs->declspec.typespecif = newType(AST_NODE_TYPE_SCALAR, INT);
    }
    resolve_type(declspecs);
    if( (isStruct = declspecs->declspec.typespecif->nodetype == AST_NODE_TYPE_STRUCT) || (isUnion =  declspecs->declspec.typespecif->nodetype == AST_NODE_TYPE_UNION) )  {
            if(outscopeforstruct) {
          //      printf("struct in struct");
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
            fprintf(stderr, "%s:%d Error storage class for '%s' not valid in global scope.\n", filename(filename_buf), lineno, name);
        
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
        if((isStruct || isUnion) && !isAnonStructdefine) {
            
        if(lookup){ 
           if(isStruct && lookup->struct_union_tag.type->nodetype == AST_NODE_TYPE_UNION) {
            fprintf(stderr, "%s:%d tag '%s' does not match previous use at %s:%d. Did you mean union %s? \n", filename(filename_buf), lineno, name, filename(lookup->filename_buf), lookup->lineno, name);
         
           } else if(isUnion && lookup->struct_union_tag.type->nodetype == AST_NODE_TYPE_STRUCT) {
        fprintf(stderr, "%s:%d tag '%s' does not match previous use at %s:%d. Did you mean struct %s? \n", filename(filename_buf), lineno, name, filename(lookup->filename_buf), lookup->lineno, name);
           
           }
            if(isPtr) {  
               declspecs->declspec.typespecif = lookup->struct_union_tag.type;
            } else {
              if(lookup->struct_union_tag.type->structunion.is_complete) {
                 declspecs->declspec.typespecif = lookup->struct_union_tag.type;
               // printf("I am complete");
              } else {
                fprintf(stderr, "%s:%d Error incomplete struct or union '%s' declared \n", filename(filename_buf), lineno, name);
                
              }
            }
        }
        else {
            if(isPtr) { 
        define_struct(declspecs->declspec.typespecif, structlookup , lineno, filename_buf,declspecs->declspec.typespecif->structunion.name, false);
            } else {
               fprintf(stderr, "%s: %d : Error Variable has incomplete definition of struct or union %s \n", filename(filename_buf), lineno, declspecs->declspec.typespecif->structunion.name);
             //  print_symbtab(structlookup);
             
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
            if(name) {
            if (isFunc){
                //append types //no checking yet 
                define_func(type, curscope, lineno, filename_buf, strgclass, name);
            } else {
              define_var(type, curscope, lineno, filename_buf, strgclass, name);
                printf("%d", sizeof_ast(type));
                
            }
            }
            ll_nodell = ll_nodell->ll.next;
           
        }
        

        //print_symbtab(curscope);
    }
//function for placing parameter list inside of function scope

void symbent_combine_fn(struct astnode *fn_parameters, int lineno, char *filename_buf, struct symbtab *curscopefn) {
         struct astnode *fn_decl = fn_parameters->head;
         if(!fn_decl->decl.next) {
         fprintf(stderr, "%s:%d Expecting a function. \n", filename(filename_buf), lineno);
        }
        if(fn_decl->decl.next->nodetype != AST_NODE_TYPE_FNDCL) {
        fprintf(stderr, "%s:%d Expecting a function. \n", filename(filename_buf), lineno);
        }   
      struct astnode *fn_parameterlist = fn_decl->decl.next->fndcl.parameters;
       if(!fn_parameterlist) {
           return; 
      }
       struct astnode *ll_nodell = fn_parameterlist->ll.head;
            while (ll_nodell != NULL) {
                struct astnode *declspecs =  ll_nodell->ll.data->declaration.declspec;
                struct astnode *declarator = ll_nodell->ll.data->declaration.decl;
                if(declarator->head) {
                     symbent_combine(declspecs, insertElementorig(AST_NODE_TYPE_LL, declarator), lineno, filename_buf, curscopefn, NULL);
                }
    

               ll_nodell = ll_nodell->ll.next;
             
           }
 //wrapper to check symbol table entry insertion for struct   

}
void symbent_struct(struct struct_stack *curstruct_scope, struct symbtab *table, int lineno, char *filename_buf, char * name, bool replace) {
 struct symbol *test = create_symbol_entry( curstruct_scope->astnode->structunion.name, SYMB_STRUCT_UNION_TAG, NAMESPACE_TAG, lineno, filename_buf);   
struct symbol *lookup = symbtab_lookup_all(table , test); //look up existance of struct 
if(lookup) {
   if((!lookup->struct_union_tag.type->structunion.is_complete) && lookup->struct_union_tag.type->structunion.isbeing_defined) {
        fprintf(stderr, "%s:%d Attempting to redeclare a struct or union '%s' that is being defined. \n", filename(filename_buf), lineno, curstruct_scope->astnode->structunion.name);
       return;
    }

     if(!lookup->struct_union_tag.type->structunion.is_complete && !lookup->struct_union_tag.type->structunion.isbeing_defined) { 
        lookup->struct_union_tag.type->structunion.isbeing_defined = 1;
        fprintf(stderr, "%s:%d incomplete defintion being defined. \n", filename(filename_buf), lineno, curstruct_scope->astnode->structunion.name);
      define_struct(curstruct_scope->astnode, table, lineno, filename_buf, name, true);
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

int compare_arrays(unsigned char arr1[], unsigned char arr2[]) {
    int size = 9;
  /*    printf("Array 1: ");
    for (int i = 0; i < size; i++) {
       printf("%d ", arr1[i]);
    }
 
    
    printf("Array 2: ");
    for (int i = 0; i < size; i++) {
       printf("%d ", arr2[i]);
    }
   printf("\n");
   */
    for (int i = 0; i < size; i++) {
        if (arr1[i] != arr2[i]) {
            return 1; // arrays are not the same
        }
    }
    return 0; // arrays are the same

}    
void resolve_type(struct astnode *declspec) {
  unsigned char type_bitmask[9] = {0, 0, 0, 0, 0, 0, 0, 0,0} ; // [void, char, short, int, long, float, struct, union]
    int unsigned_type;
    struct astnode *head = declspec->declspec.typespecif;
    struct astnode *orig = declspec->declspec.typespecif; //kept to be put in resolved
       
    while(head != NULL) {
     
        switch(head->nodetype) {
            case AST_NODE_TYPE_SCALAR:
          
            {
                switch(head->scal.types) {
                    
                    case VOID:
                    type_bitmask[0]++;
                    break;
                    case CHAR:
                    type_bitmask[1]++;
                    break;
                    case SHORT:
                    type_bitmask[2]++;
                    case INT:
                    type_bitmask[3]++;
                   
                    break;
                    case LONG:
                    type_bitmask[4]++;
                    break;
                    case DOUBLE:
                    type_bitmask[5]++;
                    break;
                    case FLOAT:
                    type_bitmask[6]++;
                    break;
                    case UNSIGNED_T:
                    if(unsigned_type != 0) {
                        fprintf(stderr, "Error duplicate unsigned type or incompotabile type\n");
                    }
                    unsigned_type = 1;
                    break;
                    case SIGNED_T:
                    if(unsigned_type != 0) {
                        fprintf(stderr, "Error duplicate unsigned type or incompotabile type\n");
                    }
                    unsigned_type = 2;
                    default:
                    break;
                }
            }
            head = head->scal.next;
            break;
            case AST_NODE_TYPE_STRUCT:
            type_bitmask[7]++;
            head = head->structunion.next; 
            break;
            case AST_NODE_TYPE_UNION:
             type_bitmask[8]++;
            head = head->structunion.next; 
            break;
            default:
            fprintf(stderr, "Error Resolving Unkonwn type when resolving types\n");
            break;
            
        }
        
    } 
        unsigned char type_void[9] = {1, 0, 0, 0, 0, 0, 0, 0,0}; //void
        unsigned char type_char[9] = {0, 1, 0, 0, 0, 0, 0, 0, 0}; //char
        unsigned char type_short[9] = {0, 0, 1, 0, 0, 0 , 0, 0}; //short int 
         unsigned char type_short_int[9] = {0, 0, 1, 1, 0, 0 , 0, 0}; 
       unsigned char type_int[9] = {0, 0, 0, 1, 0, 0, 0, 0, 0}; //int
        unsigned char type_long[9] = {0, 0, 0, 0, 1, 0, 0, 0, 0}; //long
        unsigned char type_long_int[9] = {0, 0, 0, 1, 1, 0, 0, 0, 0, 0}; //long
        unsigned char type_long_long_int[9] = {0, 0, 0, 1, 2, 0, 0, 0, 0}; //long long
        unsigned char type_long_long[9] = {0, 0, 0, 0, 2, 0, 0, 0};
        unsigned char type_double[9] = {0, 0, 0, 0, 0, 1 , 0, 0, 0};
         unsigned char type_long_double[9] = {0, 0, 0, 0, 1, 1 , 0, 0, 0};
 
         unsigned char type_float[9] = {0, 0, 0, 0, 0, 0 , 1, 0, 0};

if (compare_arrays(type_void, type_bitmask) == 0) {
    if(!unsigned_type)
       {
           declspec->declspec.typespecif_res = VOID;
           return;
       } else {
          fprintf(stderr, "%s:%d Error 'signed' or 'unsigned' value with 'void' in declaration specifiers.\n", filename(filename_buf), lineno);
       }
}
else if (compare_arrays(type_char, type_bitmask) == 0) {
   if(unsigned_type == 1) {
   declspec->declspec.unsigned_signed = 1;
   }
    declspec->declspec.typespecif_res = CHAR;
    return;
    
    
}
else if ((compare_arrays(type_short, type_bitmask) == 0) || compare_arrays(type_short_int, type_bitmask) == 0){
   // printf("Type is short int.\n");
       if(unsigned_type == 1) {
   declspec->declspec.unsigned_signed = 1;
   }
    declspec->declspec.typespecif_res = SHORT;
    return;
}
else if (compare_arrays(type_int, type_bitmask) == 0) {
   // printf("Type is int.\n");
        if(unsigned_type == 1) {
   declspec->declspec.unsigned_signed = 1;
   }
    declspec->declspec.typespecif_res = INT;
    return;
}
else if ((compare_arrays(type_long, type_bitmask) == 0) ||(compare_arrays(type_long_int, type_bitmask) == 0) ) {
   // printf("Type is long.\n");
            if(unsigned_type == 1) {
   declspec->declspec.unsigned_signed = 1;
   }
    declspec->declspec.typespecif_res = LONG;
    return;
}
else if ( (compare_arrays(type_long_long_int, type_bitmask) == 0) ||(compare_arrays(type_long_long, type_bitmask) == 0)) {
  //  printf("Type is long long.\n");
                if(unsigned_type == 1) {
   declspec->declspec.unsigned_signed = 1;
   }
    declspec->declspec.typespecif_res = LONG_LONG;
    return;
}
else if (compare_arrays(type_double, type_bitmask) == 0) {
 //   printf("Type is double.\n");    
    if(!unsigned_type) {
           declspec->declspec.typespecif_res = DOUBLE;
           return;
       } else {
          fprintf(stderr, "%s:%d Error in declaration specifiers.\n", filename(filename_buf), lineno);
       }
    
}
else if (compare_arrays(type_long_double, type_bitmask) == 0) {
  //  printf("Type is long double.\n");
       if(!unsigned_type) {
           declspec->declspec.typespecif_res = LONG_DOUBLE;
           return;
       } else {
          fprintf(stderr, "%s:%d Error in declaration specifiers.\n", filename(filename_buf), lineno);
       }
}
else if (compare_arrays(type_float, type_bitmask) == 0) {
    printf("Type is float.\n");
 if(!unsigned_type) {
           declspec->declspec.typespecif_res = FLOAT;
           return;
       } else {
          fprintf(stderr, "%s:%d Error in declaration specifiers.\n", filename(filename_buf), lineno);
       }
}
fprintf(stderr, "Error with types\n");
}
