#include <stddef.h>
#include "quads.h"
#include "../ast.h"
#include <stdlib.h>
#include "../parser.tab.h"
#include <stdio.h>
#include <string.h>
#include "../symbtab.h"
#include "sizeof.h"
 extern char *current_fn;
#define DIRECT 1
#define INDIRECT 0
#define UNSPECIFIED -2
#define ALWAYS -3
struct basic_block *cur_bb; //current basic block
int bbnocount;
struct basic_block *break_bb, *continue_bb; // for loops continue points
struct basic_block *head_bb; //head of linked list of basic block 
//struct basic_block *truestuff, *falsestuff;
struct basic_block *gen_quads(struct astnode *stmtlist){
 struct astnode *llstmtlist = stmtlist->ll.head;
 //create current basic block keep  
   
    head_bb = new_bb();
    head_bb->regidcount = 0;
    cur_bb = head_bb;

 while(llstmtlist != NULL) { 
    
    struct astnode *curstmt = llstmtlist->ll.data;
 if(curstmt) { //because declaration is stored as null (parser.y line 475
   gen_stmt(curstmt);

 }

 llstmtlist = llstmtlist->ll.next;
 }
    print_func(head_bb);
}
 void gen_stmt(struct astnode *stmt) {
    if(stmt) {
     switch(stmt->nodetype)  {
       case AST_NODE_TYPE_BINOP:
        if(stmt->binop.operator == '=') {
            printf("general assignment \n");
       gen_assign(stmt);
        }
       break;
       case AST_NODE_TYPE_LL: 
       printf("{ } statement\n");
          struct astnode *ll_nodell = stmt->ll.head;
          
            
            while (ll_nodell != NULL) {
                gen_stmt(ll_nodell->ll.data);
                ll_nodell = ll_nodell->ll.next;
           
            }
       break;
    case AST_NODE_TYPE_IFELSE:
       gen_if(stmt);
       break;
    case AST_NODE_TYPE_WHILE:
        gen_while(stmt);
       break;
    case AST_NODE_TYPE_BREAK:
    if(!break_bb) {
        fprintf(stderr, "Error break not in loop.\n");
    }
        emit_quads(BR_OC, newbb_node(break_bb), NULL, NULL);
        break;
       case AST_NODE_TYPE_CONTINUE:
       if(!continue_bb) {
         fprintf(stderr, "Error continue not in loop.\n");
       }
       emit_quads(BR_OC, newbb_node(continue_bb), NULL, NULL);
       break;
    case AST_NODE_TYPE_FN:
        struct generic_node *target = function_call(stmt);
        emit_quads(CALL_OC, target, NULL, NULL);
        break;
    case AST_NODE_TYPE_RETURN:
    //probably should check if return matches some where
        emit_quads(RET_OC, gen_rvalue(stmt->returnstmt.statement, NULL, NULL), NULL, NULL);
    break;

       default:
 

       fprintf(stderr, "stmt not supported yet nodetype%d \n", stmt->nodetype);
       break;
    }
    }
 }
 struct generic_node *newbb_node(struct basic_block *basic_block) {
    struct generic_node *bb = malloc(sizeof(struct generic_node));
    bb->types = BLOCK_TYPE;
    bb->value.bb = basic_block;
    return bb;

}
 struct generic_node *new_immediate(int value) {
    struct generic_node *target = malloc(sizeof(struct generic_node));
                    target->types = IMMEDIATE_TYPE;
                target->value.immediate = value;
                return target;
 }
  struct astnode *demote_array(struct astnode *declspec) {
        struct astnode *newptr = newType(AST_NODE_TYPE_POINTER, 0);
        newptr->ptr.next = declspec->arraydecl.next;
        return newptr;
 }
   struct astnode *mkptr(struct astnode *declspec) {
        struct astnode *newptr = newType(AST_NODE_TYPE_POINTER, 0);
        newptr->ptr.next = declspec;
        return newptr;
 }

//this function checks left and right emits mult if necessary promotes and demotes arrays
struct generic_node* check_type(struct generic_node** left, struct generic_node** right, int get_opcode) {
               if((*left)->declspec->nodetype == AST_NODE_TYPE_ARRAYDCL){
                (*left)->declspec = demote_array((*left)->declspec);
               }
    switch (get_opcode) {

        case '+': //check for ptr addition
            if ((*left)->declspec->nodetype == AST_NODE_TYPE_POINTER && (*right)->declspec->nodetype == AST_NODE_TYPE_DECLSPEC) {
                if ((*right)->declspec->declspec.typespecif_res == INT) {
                    struct generic_node* location = new_temporary();
                    int sizeofleft = sizeof_ast((*left)->declspec->ptr.next);
                    struct generic_node *mult_val = new_immediate(sizeofleft);
                    emit_quads(MULT_OC, *right, mult_val, location);
                    location->declspec = (*left)->declspec;
                    *right = location;
                    return;
                }
            }

            if ((*right)->declspec->nodetype == AST_NODE_TYPE_POINTER) {
                if ((*left)->declspec->declspec.typespecif_res == INT) {
                    struct generic_node* location = new_temporary();
                    int sizeofright = sizeof_ast((*right)->declspec->ptr.next);
                    struct generic_node *mult_val = new_immediate(sizeofright);
                    emit_quads(MULT_OC, *left, mult_val, location);
                    location->declspec = (*right)->declspec;
                    *left = location;
                    return;
                }
            }
            break;
        case '-':
            if ((*left)->declspec->nodetype == AST_NODE_TYPE_POINTER && (*right)->declspec->nodetype == AST_NODE_TYPE_POINTER) {
                struct generic_node *temp = new_temporary();
                emit_quads(SUB_OC, *left, *right, temp);
                   int sizeofleft = sizeof_ast((*left)->declspec->ptr.next);
                    struct generic_node *size_val = new_immediate(sizeofleft);
                emit_quads(DIV_OC, temp,  size_val, temp);
                *right = *left = temp;
                return;
            }
        break;  //check for ptr subtraction
        case '*':
        case '/':
        case '%':
         if((*right)->declspec->nodetype == AST_NODE_TYPE_POINTER || (*left)->declspec->nodetype == AST_NODE_TYPE_POINTER) {
                fprintf(stderr, "Error with pointer operation using '%c\n", get_opcode);
         }
        break;
        // add other cases for different operations here
    }
}
struct generic_node *function_call(struct astnode *functioncall) {
    struct astnode *funcname = functioncall->fn.left;
    struct astnode *functype;

       struct generic_node *target = malloc(sizeof(struct generic_node));
        struct astnode *declspecs = malloc(sizeof(struct astnode));
           
    if(funcname->nodetype == AST_NODE_TYPE_IDENT) {
     
          if(funcname->ident.symbol) {
             if(funcname->ident.symbol->attr_type != SYMB_FUNCTION_NAME ) {
                fprintf(stderr, "Error calling '%s' that is not declared as function.\n", funcname->ident.string);
                return NULL;
             } else {
                //get return type of function
                    functype = funcname->ident.symbol->fn.type;
                if(functype->nodetype == AST_NODE_TYPE_FNDCL) {  
                 //check return type
                              astwalk_impl(functype->fndcl.next, 0);
                 if(functype->fndcl.next->nodetype == AST_NODE_TYPE_DECLSPEC) {
                            if (functype->fndcl.next->declspec.typespecif_res == VOID || functype->fndcl.next->declspec.typespecif_res ==  INT ) {
                        declspecs->nodetype = AST_NODE_TYPE_DECLSPEC;
                        declspecs->declspec.typespecif_res = functype->fndcl.next->declspec.typespecif_res;
                        target->declspec = declspecs;
                            } else {
                                fprintf(stderr, "Error function call of '%s' has a return type that is not supported \n", funcname->ident.string);
                            }
                 }
                          
                }

                
             
             }

          } else {
                     declspecs->nodetype = AST_NODE_TYPE_DECLSPEC;
                        declspecs->declspec.typespecif_res = INT;
                        target->declspec = declspecs;
          }
          if(functioncall->fn.ll) { //otherwise no parameters
          int size = functioncall->fn.ll->ll.head->ll.element_count + 1;
          emit_quads(ARGBEGIN, new_immediate(size), NULL, NULL);
        struct astnode *elements[functioncall->fn.ll->ll.head->ll.element_count + 1]; //fill in list in reverse
        struct astnode *ll_node =functioncall->fn.ll->ll.head;
    int count = size;
            size -= 1;
           
            while (ll_node != NULL) {
               elements[size--] = ll_node->ll.data;
          
                ll_node = ll_node->ll.next;
            }

            int countstart = 0;
            while(countstart != count) {
              
            emit_quads(ARG, new_immediate(countstart - 1), gen_rvalue(elements[countstart++],NULL, NULL), NULL);
            }

          }

       target->value.ident = funcname->ident.string;
       target->types = VARIABLE_TYPE;
       return target;
    }

    
}
int get_opcode(struct astnode *opcode) {
    switch(opcode->binop.operator) {
        case '+':
            return ADD_OC;
            break;
        case '-':
            return SUB_OC;
            break;
        case '*':
            return MULT_OC;
            break;
        case '%':
            return MOD_OC;
            break;
        case '/':
            return DIV_OC;
        break;
        default:
        fprintf(stderr, "binop %d not supprted yet \n", opcode->binop.operator);

    }
    return -1;
   
}

struct generic_node *gen_rvalue(struct astnode *rexpr, struct generic_node *addr, int *condcode) {
    struct generic_node *target = malloc(sizeof(struct generic_node)); //designate target 
   switch(rexpr->nodetype) {
    case AST_NODE_TYPE_IDENT: 
        if(!rexpr->ident.symbol) {
         printf("undeclared variable\n");
        //check types
        } else {
          //check if it is a scalar variable 
           switch(rexpr->ident.symbol->var.type->nodetype) { //probably should check if it a function call 
            case AST_NODE_TYPE_DECLSPEC: {
                if(rexpr->ident.symbol->attr_type == SYMB_FUNCTION_NAME) {
                    fprintf(stderr, "Error using a variable declared as a function in an expression\n");
                }  else {
           target->types = VARIABLE_TYPE;
           target->declspec= rexpr->ident.symbol->var.type;
           target->value.ident = strdup(rexpr->ident.string);
            if(condcode) {
                    *condcode = UNSPECIFIED;
                    }
                }
            return target;
           
           }  
           case AST_NODE_TYPE_POINTER:
           {
            target->types = VARIABLE_TYPE;
           target->declspec = rexpr->ident.symbol->var.type;
           target->value.ident = strdup(rexpr->ident.string);
            return target;
           }
           case AST_NODE_TYPE_ARRAYDCL:
           {
    
            struct generic_node *temp = new_temporary();
            target->types = VARIABLE_TYPE;
           target->declspec = rexpr->ident.symbol->var.type;
           target->value.ident = strdup(rexpr->ident.string);
              emit_quads(LEA_OC, target, NULL , temp);
                temp->declspec = target->declspec;
              return temp;
           }
           default:
           
            fprintf(stderr, "UHOHH! IDENT CASE NOT SUPPORTED YET %d\n ", rexpr->ident.symbol->var.type->nodetype);
            astwalk_impl(rexpr->ident.symbol->var.type, 0);
            break;
           }
        }

    
    break;
    case AST_NODE_TYPE_NUM: 
        if(rexpr->num.number.type == INT_SIGNED || rexpr->num.number.type == INT_UNSIGNED) {
                target->types = IMMEDIATE_TYPE;
                target->value.immediate = rexpr->num.number.integer;
                struct astnode *declspecs = malloc(sizeof(struct astnode));
              declspecs->nodetype = AST_NODE_TYPE_DECLSPEC;
               declspecs->declspec.typespecif_res = INT;
                 target->declspec = declspecs;
                    if(condcode) {
            *condcode = UNSPECIFIED;
                    }
               return target;
        }
     break;
    case AST_NODE_TYPE_FN:
        if(!addr) {

              addr = new_temporary(); 
             
            } 
            //should prob check before as well 
            struct generic_node *target = function_call(rexpr);
            emit_quads(CALL_OC, target, addr, NULL);
           addr->declspec = target->declspec;
            return addr;

        break;
    case AST_NODE_TYPE_BINOP: {
           //type checking would take place before this to ensure that left and right types are proper
           switch(rexpr->binop.operator) {
            case '=':
                            if(condcode) {
                                *condcode = UNSPECIFIED;
                            }
                return gen_assign(rexpr);
                      

                    break;
            case '+':
            case '/':
            case '*':
            case '-':
            
            struct generic_node *left = gen_rvalue(rexpr->binop.left, NULL, NULL);
           
            
            struct generic_node *right = gen_rvalue(rexpr->binop.right, NULL, NULL);
                 check_type(&left, &right, rexpr->binop.operator);
            if(!addr) {

              addr = new_temporary(); 
             
            } 
                 if(left != right) {
                              emit_quads(get_opcode(rexpr), left, right, addr);   
                     } else {
                        emit_quads(MOV_OC, left, NULL, addr);
                     }
                          
                 addr->declspec = left->declspec; //need to change!!
                  //  astwalk_impl(left->declspec, 0);\
                
            return addr;
        break;
         case EQEQ:
         case GTEQ:
         case NOTEQ:
         case LTEQ:
         case '>':
         case '<':

               left = gen_rvalue(rexpr->binop.left, NULL, NULL);
               right = gen_rvalue(rexpr->binop.right, NULL, NULL);

               emit_quads(CMP_OC, left, right, NULL);
               if(condcode) {
                *condcode = rexpr->binop.operator;

               } else  {
                if(!addr)
                addr = new_temporary();
               emit_quads(get_set_opcode(rexpr), NULL, NULL, addr);
               }
                
               return addr;
        break;
    case AST_NODE_TYPE_FNDCL:
        break;
 case LOGAND:

  struct basic_block *Bt = new_bb();
    struct basic_block *Bf = new_bb();
    struct basic_block *Bn = new_bb();

    gen_condexpr(rexpr->binop.left, Bt, Bf, 1);
    push_bb(Bt);
   gen_condexpr(rexpr->binop.right, Bn, Bf, 1 );
    push_bb(Bf);
    link_bb(ALWAYS, Bn, NULL);
    push_bb(Bn);
        if(*condcode) {
            
        *condcode = EQEQ_OC;
    }
    
  return addr;
    break;

case LOGOR:
    Bt = new_bb();
   Bf = new_bb();
  Bn = new_bb();

    gen_condexpr(rexpr->binop.left, Bn, Bf, 0);
    push_bb(Bf);
    gen_condexpr(rexpr->binop.right, Bn, Bt, 0);
    push_bb(Bt);
    link_bb(ALWAYS, Bn, NULL);
    push_bb(Bn);
    if(*condcode) {
        *condcode = NTEQ_OC;
    }
    break;

 
  
  

     
  return addr;
     default:
        fprintf(stderr, "Error with binop operator\n");
           }
  
   
    }
    case AST_NODE_TYPE_UNOP:
     if(rexpr->unop.operator == '-') {
        struct generic_node *address = gen_rvalue(rexpr->unop.right, NULL , NULL);
        if(!addr) {
            addr = new_temporary();
        }
        emit_quads(MULT_OC, new_immediate(-1), address, addr);
        addr->declspec = address->declspec;
        return addr;
    }
       if(rexpr->unop.operator == '*') //pointer deference
   
    { 
  
  
       struct generic_node * address = gen_rvalue(rexpr->unop.right, NULL, NULL);
        int flag;
           if(address->declspec->nodetype == AST_NODE_TYPE_POINTER && address->declspec->ptr.next->nodetype == AST_NODE_TYPE_ARRAYDCL) {
               address->declspec = address->declspec->ptr.next;
               return address;
                }
       if(!addr) {
        addr = new_temporary();
       }    

       if(address->declspec->nodetype == AST_NODE_TYPE_DECLSPEC) {
        fprintf(stderr, "Error deferencing pointer type incompotabile.\n");
       }
       if(address->declspec->nodetype == AST_NODE_TYPE_POINTER) {
            if(!address->declspec->ptr.next) {
              fprintf(stderr, "Error with deferencing pointer.\n");
            } else {
               addr->declspec = address->declspec->ptr.next;
            }
            
       }
       emit_quads(LOAD_OC, address, NULL, addr);
               if(condcode) {
                    *condcode = UNSPECIFIED;
                    }
            return addr;
      
      
     
    
   
    }
    if(rexpr->unop.operator == '&') {
             
        if(rexpr->unop.right->nodetype == AST_NODE_TYPE_UNOP && rexpr->unop.right->unop.operator== '*'  ) {
           return gen_rvalue(rexpr->unop.right->unop.right, addr, NULL);
        }
     else {

        struct generic_node * address = gen_rvalue(rexpr->unop.right, NULL, NULL);
        if(!addr) {
            addr = new_temporary();
        }
        emit_quads(LEA_OC,address, NULL, addr );
        addr->declspec = mkptr(address->declspec);
        return addr;
    }
    }
        break;
    case AST_NODE_TYPE_STRING:
            target->types = STRING_TYPE;
            target->value.string = rexpr->ident.string;
            return target;

    default:
        fprintf(stderr, "PROBLEM with rvalue!! \n");
        astwalk_impl(rexpr, 0);
    break;
  

}
    
}
struct generic_node *gen_lvalue(struct astnode *lexpr, int *mode){
    
 switch(lexpr->nodetype) {
    case AST_NODE_TYPE_IDENT: {
    //check symbol thgen insert //probably should check if symbol exists as well 
        *mode = DIRECT;
        struct generic_node *target = malloc(sizeof(struct generic_node));
            target->types = VARIABLE_TYPE;
           target->declspec = lexpr->ident.symbol->var.type;
           target->value.ident = strdup(lexpr->ident.string);
            return target;

    }
    case AST_NODE_TYPE_NUM: {
        return NULL;
    }

    case AST_NODE_TYPE_UNOP: {
        
        if(lexpr->unop.operator == '*') {
            *mode = INDIRECT;
      //      fprintf(stderr, "hrere\n");
            return gen_rvalue(lexpr->unop.right, NULL, NULL);
        }
    }
        default:
        fprintf(stderr, "Error with lvalue\n");
 }
}
int get_set_opcode(struct astnode *opcode) {
    switch (opcode->binop.operator) {
        case EQEQ:
            return SETEQ_OC;
        case GTEQ:
            return GTEQ_OC;
        case LTEQ:
            return LTEQ_OC;
        case '>':
            return SETGT_OC;
        case '<':
            return SETLT_OC;
        case NOTEQ:
            return SETNEQ_OC;
        default:
            fprintf(stderr, "binop %d not supported yet \n", opcode->binop.operator);
            return -1;
    }
}

//generates new temporaring register and returns
struct generic_node *new_temporary() {
struct generic_node *target = malloc(sizeof(struct generic_node));

target->value.regid = cur_bb->regidcount++; //increment counter
target->types = REGISTER_TYPE;
 
return target;

}

struct generic_node *gen_assign(struct astnode *expr) {
    int destmode;
  
    struct generic_node *dst = gen_lvalue(expr->binop.left, &destmode);
   
    
    if(!dst) {
        printf("error");
    }
    if(destmode == DIRECT) {
  
        struct generic_node *test = gen_rvalue(expr->binop.right, dst, NULL);
  
          if(dst != test) {
            emit_quads(MOV_OC, test, NULL, dst);
     }

    } else {
        
       emit_quads(STORE_OC, gen_rvalue(expr->binop.right, NULL, NULL), dst, NULL);

    }
    return dst;
}
void emit_quads(int opcode, struct generic_node *src1, struct generic_node *src2, struct generic_node *result) {
struct quad *quad = malloc(sizeof (struct quad));

quad->opcode = opcode;
quad->result = result;
quad->src1 = src1;
quad->src2 = src2;
quad->next = NULL;
  if (!cur_bb->listquadbeg) {
        cur_bb->listquadbeg = quad;
        cur_bb->listquadend = quad;
    } else {
        cur_bb->listquadend->next = quad;
        cur_bb->listquadend = quad;
    }


}
 

 //TODO: ARRAYS [NEED SIZE OF TYPES]
 //TODO: CONTROL FLOW BLOCKS 
void print_genericnode(struct generic_node *generic_node) {
    if(generic_node) {
  switch(generic_node->types) {
    case REGISTER_TYPE :
        printf("T%d ", generic_node->value.regid); break;
    case IMMEDIATE_TYPE :
       printf("%d ", generic_node->value.immediate); break;
    case VARIABLE_TYPE :
     printf("%s  ", generic_node->value.ident); break;
     case BLOCK_TYPE:
   
   printf(".BB%d.%d", generic_node->value.bb->bb_fn, generic_node->value.bb->bb_no); break;
     case STRING_TYPE: 
         printf("\"%s\"  ", generic_node->value.string); break;
    default:
  }
    }
}

void print_quads(struct quad *quad) {
 print_genericnode(quad->result); 
printf(" %s  ",opcode_to_string(quad->opcode));
print_genericnode(quad->src1);
printf(", ");
print_genericnode(quad->src2);
 
}
char* opcode_to_string(enum opcode op) {
    switch (op) {
        case LOAD_OC:
            return "LOAD";
        case STORE_OC:
            return "STORE";
        case LEA_OC:
            return "LEA";
        case MULT_OC:
            return "MULT";
        case ADD_OC:
            return "ADD";
        case SUB_OC:
            return "SUB";
        case DIV_OC:
            return "DIV";
        case MOD_OC:
            return "MOD";
        case MOV_OC:
            return "MOV";
        case LOGAND_OC:
            return "LOGAND";
        case LOGOR_OC:
            return "LOGOR_OC";
        case LOGNOT_OC:
            return "LOGNOT_OC";
        case NOT_OC:
            return "NOT_OC";
        case AND_OC:
            return "AND_OC";
        case OR_OC:
            return "OR_OC";
        case SHL_OC:
            return "SHL_OC";
        case SHR_OC:
            return "SHR_OC";
        case XOR_OC:
            return "XOR_OC";
        case CMP_OC:
            return "CMP_OC";
        case LTEQ_OC:
            return "LTEQ_OC";
        case GTEQ_OC:
            return "GTEQ_OC";
        case LT_OC:
            return "LT_OC";
        case GT_OC:
            return "GT_OC";
        case EQEQ_OC:
            return "EQEQ_OC";
        case NTEQ_OC:
            return "NTEQ_OC";
        case SETNEQ_OC:
            return "SETNEQ";
        case SETEQ_OC:
            return "SETEQ";
        case CALL_OC:
            return "CALL_OC";
        case RET_OC:
            return "RET_OC";
        case SETLT_OC:
            return "SETLT";
        case SETGT_OC:
            return "SETGT";
        case SETLTEQ_OC:
            return "SETLTEQ";
        case SETGTEQ_OC:
            return "SETGTEQ";
        case NOTEQ_OC:
            return "NOTEQ";
        case BR_OC:
            return "BR_OC";
        case ARG:
            return "ARG";
        case ARGBEGIN:
            return "ARGBEGIN";
        default:
        fprintf(stderr, "%d\n", op);
            return "UNKNOWN_OC";
            
    }
}



void gen_condexpr(struct astnode *expr, struct basic_block *Bt, struct basic_block *Bf, int flipcond) {
    int condcode = -1;
    int resultcondcode = -1;
   struct generic_node *cond = gen_rvalue(expr, NULL, &condcode);
   fprintf(stderr, "%d", condcode);
   if(condcode == -2) {
    if(!cond) {
        return;
    }
    emit_quads(CMP_OC, cond, new_immediate(0), NULL);

    condcode = EQEQ_OC;
 
   }
   // flip opcodes
switch (condcode) {
    case EQEQ:
        condcode = flipcond ? NOTEQ_OC : EQEQ_OC;
        break;
    case GTEQ:
        condcode = flipcond ? LT_OC : GTEQ_OC;
        break;
    case NOTEQ:
        condcode = flipcond ? EQEQ_OC : NOTEQ_OC;
        break;
    case LTEQ:
        condcode = flipcond ? GTEQ_OC : LTEQ_OC;
        break;
    case '>':
        condcode = flipcond ? LTEQ_OC : GT_OC;
        break;
    case '<':
        condcode = flipcond ? GTEQ_OC : LT_OC;
        break;
    default:
        break;
}
    if(flipcond) {
     link_bb(condcode, Bf, Bt);  //Bt is the new false fall through 
    } else {           
          link_bb(condcode, Bt, Bf); //standard
    }
}

void gen_if(struct astnode *if_node) {
    struct basic_block *Bt = new_bb();
    struct basic_block *Bf = new_bb();
    struct basic_block *Bn;

    if(if_node->ifelse.ELSE) {
       Bn = new_bb();
    }
     else {

        Bn = Bf;
     }

     gen_condexpr(if_node->ifelse.IF, Bt, Bf, 1);
    push_bb(Bt);
    gen_stmt(if_node->ifelse.THEN);

    link_bb(ALWAYS, Bn, NULL);
    if(if_node->ifelse.ELSE) {
        push_bb(Bf);
        gen_stmt(if_node->ifelse.ELSE);
        link_bb(ALWAYS, Bn, NULL);
    }
    push_bb(Bn);

}
//alternate implementation in the lecture notes
void gen_while(struct astnode *while_loop) {
    struct basic_block *body, *cond, *next;
    body = new_bb(); // push on stack
    cond = new_bb();
    next = new_bb(); // push
    struct basic_block *prev_break_bb = break_bb; 
    struct basic_block *prev_cont_bb = continue_bb; 

    break_bb = next;
    continue_bb = cond;

    link_bb(ALWAYS, cond, NULL);
    push_bb(body);

    gen_stmt(while_loop->whilestmt.body);
        //restore
    if (prev_break_bb) {
        break_bb = prev_break_bb;
    }
    if (prev_cont_bb) {
        continue_bb = prev_cont_bb;
    }

    link_bb(ALWAYS, cond, NULL);
    push_bb(cond);
    gen_condexpr(while_loop->whilestmt.expression, body, next, 0);
    push_bb(next);
}


struct basic_block *new_bb(){ 
    struct basic_block *newbb = malloc(sizeof(struct basic_block));

  newbb->bb_no = bbnocount++;

 newbb->bbname = current_fn;
    return newbb;

};
void print_basicblock(struct basic_block *basic_block) {
      int isbranch;
            struct quad *head = basic_block->listquadbeg;
           while(head) {
           printf("    "); print_quads(head);
            printf("\n");
           head = head->next;
           }
        
}

//pass head basic block and print all of them inside
void print_func(struct basic_block *basic_block) {
  printf("%s:\n", current_fn);
  struct basic_block *head = basic_block;
  while(head) {
  printf(".BB%d.%d \n", head->bb_fn, head->bb_no);
   print_basicblock(head);
   head = head->next;
  }
    
}
void link_bb(int condcode, struct basic_block *Bt, struct basic_block *Bf) {
    if(condcode == ALWAYS) {
       emit_quads(BR_OC, newbb_node(Bt), NULL, NULL);
        return;
    }
    if(condcode == -2) {
        emit_quads(NOTEQ, newbb_node(Bt), newbb_node(Bf), NULL);
    }
  
    emit_quads(condcode, newbb_node(Bt), newbb_node(Bf), NULL); //def is fall through
}

void push_bb(struct basic_block *new_bb){
    cur_bb->next = new_bb;
    cur_bb = new_bb;
}