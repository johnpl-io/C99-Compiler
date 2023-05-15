#include <stddef.h>
#include "../quads/quads.h"
#include "../parser/ast.h"
#include <stdlib.h>
#include "../parser/parser.tab.h"
#include <stdio.h>
#include <string.h>
#include "../parser/symbtab.h"
#include "../quads/sizeof.h"
#include "codegen.h"
extern struct symbtab *current_scope;
int string_num = 0 ;
extern FILE *outputfile;
extern int stack_offset;
extern char *current_fn;
extern int max_regid;

void code_generation(struct basic_block *head){
    fprintf(outputfile, "\t.global %s\n", current_fn);
    fprintf(outputfile, "\t.type %s, @function\n", current_fn);
    fprintf(outputfile, "%s:\n", current_fn);
    fprintf(outputfile, "\tpushl %%ebp\n");
    fprintf(outputfile, "\tmovl %%esp, %%ebp\n");
    if(stack_offset != 0 || max_regid != 0) {
        fprintf(outputfile, "\tsubl $%d, %%esp\n",((-1*(stack_offset) + 4*max_regid - 1) / 16 + 1) * 16);
    }
    
     while (head) {
      struct quad *quad = head->listquadbeg;
       fprintf(outputfile, ".BB%d%d:\n", head->bb_fn, head->bb_no);
        while (quad){
            translate_quad(quad);
            quad = quad->next;
        }
        head = head->next;
    }
   
    
        fprintf(outputfile, "\tleave\n");
    
    fprintf(outputfile, "\tret\n");
}

void translate_quad(struct quad *quad) {
    struct generic_node *result = quad->result;
    struct generic_node *src1 = quad->src1;
    struct generic_node *src2 = quad->src2;
    static int num_arg = 0;
    //stdout is the file we're writing to
    switch (quad->opcode) {
        case LOAD_OC:
            fprintf(outputfile, "\tmovl %s, %%eax\n", checkGenericNode(src1));
            fprintf(outputfile, "\tmovl (%%eax), %%edx\n");
            fprintf(outputfile, "\tmovl %%edx, %s\n", checkGenericNode(result));
            break;
        case STORE_OC:
            fprintf(outputfile, "\tmovl %s, %%eax\n", checkGenericNode(src1));
            fprintf(outputfile, "\tmovl %s, %%edx\n", checkGenericNode(src2));
            fprintf(outputfile, "\tmovl %%eax, (%%edx)\n");
            break;
        case LEA_OC:
            fprintf(outputfile, "\tleal %s, %%eax\n", checkGenericNode(src1));
            fprintf(outputfile, "\tmovl %%eax, %s\n", checkGenericNode(result));
            break;
        case MULT_OC:
            fprintf(outputfile, "\tmovl %s, %%eax\n", checkGenericNode(src1));
            fprintf(outputfile, "\tmovl %s, %%edx\n", checkGenericNode(src2));
            fprintf(outputfile, "\timull %%edx, %%eax\n");
            fprintf(outputfile, "\tmovl %%eax, %s\n", checkGenericNode(result));
            break;
        case ADD_OC:
            fprintf(outputfile, "\tmovl %s, %%eax\n", checkGenericNode(src1));
            fprintf(outputfile, "\tmovl %s, %%edx\n", checkGenericNode(src2));
            fprintf(outputfile, "\taddl %%edx, %%eax\n");
            fprintf(outputfile, "\tmovl %%eax, %s\n", checkGenericNode(result));
            break;
        case SUB_OC:
            fprintf(outputfile, "\tmovl %s, %%eax\n", checkGenericNode(src1));
            fprintf(outputfile, "\tmovl %s, %%edx\n", checkGenericNode(src2));
            fprintf(outputfile, "\tsubl %%edx, %%eax\n");
            fprintf(outputfile, "\tmovl %%eax, %s\n", checkGenericNode(result));
            break;
        case DIV_OC:
            fprintf(outputfile, "\tmovl %s, %%eax\n", checkGenericNode(src1));
            fprintf(outputfile, "\tcltd\n");
            fprintf(outputfile, "\tmovl %s, %%ecx\n", checkGenericNode(src2));
            fprintf(outputfile, "\tidivl %%ecx\n");
            fprintf(outputfile, "\tmovl %%eax, %s\n", checkGenericNode(result));

            break;
        case MOD_OC:
            fprintf(outputfile, "\tmovl %s, %%eax\n", checkGenericNode(src1));
            fprintf(outputfile, "\tcltd\n");
            fprintf(outputfile, "\tmovl %s, %%ecx\n", checkGenericNode(src2));
            fprintf(outputfile, "\tidivl %%ecx\n");
            fprintf(outputfile, "\tmovl %%edx, %s\n", checkGenericNode(result));
            break;
        case MOV_OC:
            fprintf(outputfile, "\tmovl %s, %%eax\n", checkGenericNode(src1));
            fprintf(outputfile, "\tmovl %%eax, %s\n", checkGenericNode(result));
            break;
        case CMP_OC: 
            fprintf(outputfile, "\tmovl %s, %%eax\n", checkGenericNode(src1));
            fprintf(outputfile, "\tcmpl %s, %%eax\n", checkGenericNode(src2));
            break;
        case LTEQ_OC:
            fprintf(outputfile, "\tjle %s\n", checkGenericNode(src1));
            fprintf(outputfile, "\tjmp %s\n", checkGenericNode(src2));
            break;
        case NOTEQ_OC:
            fprintf(outputfile, "\tjne %s\n", checkGenericNode(src1));
            fprintf(outputfile, "\tjmp %s\n", checkGenericNode(src2));
            break;
        case GTEQ_OC:
            fprintf(outputfile, "\tjge %s\n", checkGenericNode(src1));
            fprintf(outputfile, "\tjmp %s\n", checkGenericNode(src2));
            break;
        case LT_OC:
            fprintf(outputfile, "\tjl %s\n", checkGenericNode(src1));
            fprintf(outputfile, "\tjmp %s\n", checkGenericNode(src2));
            break;
        case GT_OC:
            fprintf(outputfile, "\tjg %s\n", checkGenericNode(src1));
            fprintf(outputfile, "\tjmp %s\n", checkGenericNode(src2));
            break;
        // right
        case EQEQ_OC:
            fprintf(outputfile, "\tje %s\n", checkGenericNode(src1));
            fprintf(outputfile, "\tjmp %s\n", checkGenericNode(src2));
            break;
        case NTEQ_OC:
            fprintf(outputfile, "\tjne %s\n", checkGenericNode(src1));
            fprintf(outputfile, "\tjmp %s\n", checkGenericNode(src2));
            break;
        case SETNEQ_OC:
            fprintf(outputfile, "\tsetne %%al\n");
            fprintf(outputfile, "\tmovzbl %%al, %%eax\n");
            fprintf(outputfile, "\tmovl %%eax, %s\n", checkGenericNode(result));
            break;
        case SETEQ_OC:
            fprintf(outputfile, "\tsete %%al\n");
            fprintf(outputfile, "\tmovzbl %%al, %%eax\n");
            fprintf(outputfile, "\tmovl %%eax, %s\n", checkGenericNode(result));
            break;
        case ARGBEGIN:
            num_arg = src1->value.immediate;
            break;
        case ARG:
            fprintf(outputfile, "\tpushl %s\n", checkGenericNode(src2));
            break;
        case CALL_OC:
            fprintf(outputfile, "\tcall %s\n", checkGenericNode(src1));
              fprintf(outputfile, "\taddl $%d, %%esp\n", 4*num_arg);
            if (src2){
              
                fprintf(outputfile, "\tmovl %%eax, %s\n", checkGenericNode(src2));
            }
            break;
        case RET_OC: 
            if (src1 != NULL) {
                fprintf(outputfile, "\tmovl %s, %%eax\n", checkGenericNode(src1));
            }
            break;
        case SETLT_OC:
            fprintf(outputfile, "\tsetl %%al\n");
            fprintf(outputfile, "\tmovzbl %%al, %%eax\n");
            fprintf(outputfile, "\tmovl %%eax, %s\n", checkGenericNode(result));
            break;
        case SETGT_OC:
            fprintf(outputfile, "\tsetg %%al\n");
            fprintf(outputfile, "\tmovzbl %%al, %%eax\n");
            fprintf(outputfile, "\tmovl %%eax, %s\n", checkGenericNode(result));
            break;
        case SETLTEQ_OC:
            fprintf(outputfile, "\tsetle %%al\n");
            fprintf(outputfile, "\tmovzbl %%al, %%eax\n");
            fprintf(outputfile, "\tmovl %%eax, %s\n", checkGenericNode(result));
            break;
        case SETGTEQ_OC:
            fprintf(outputfile, "\tsetge %%al\n");
            fprintf(outputfile, "\tmovzbl %%al, %%eax\n");
            fprintf(outputfile, "\tmov %%eax, %s\n", checkGenericNode(result));
            break;
        case BR_OC:
            fprintf(outputfile, "\tjmp %s\n", checkGenericNode(src1));
            break;
        default:
            fprintf(stderr, "Error generating assembly.\n");
            break;
    }
}

char *checkGenericNode(struct generic_node *node){
    char* buf = (char*)malloc(1000);
    switch (node->types){
        case IMMEDIATE_TYPE:
            // sprintf()
            // Handle the CONSTANT_TYPE case, not sure about this
            sprintf(buf, "$%d", node->value.immediate);
            return buf;
            break;
        case REGISTER_TYPE:
            // Handle the REGISTER_TYPE case
            // would need to look both at the stack offset and the regid
            sprintf(buf, "%d(%%ebp)", (-(-1*(stack_offset) + 4*(node->value.regid + 1))));
            return buf;
            break;
            
        case VARIABLE_TYPE:
            // Handle the VARIABLE_TYPE case
            if(node->storage_class == AUTO_S){
                sprintf(buf, "%d(%%ebp)", node->stack_offset);
            } else {
                sprintf(buf, "%s", node->value.ident);   
            }
        
            return buf;
            break;

        case BLOCK_TYPE:
            // Handle the BLOCK_TYPE c
            // dont know if this is what we're supposed to be returning
            sprintf(buf, ".BB%d%d", node->value.bb->bb_fn, node->value.bb->bb_no);
            return buf;
            break;

        case STRING_TYPE:
            // more to it do strings later
            // 
            fprintf(outputfile, "\t.section .rodata\n");
            fprintf(outputfile, ".LC%d:\n", string_num);
            sprintf(buf, "$.LC%d", string_num);
            fprintf(outputfile, "\t.string \"");	stringprinter(node->value.string, outputfile);  fprintf(outputfile, "\"\n");
            fprintf(outputfile, "\t.text\n");
    
            string_num++;
            // what do I return
            return buf;
            break;

        default:
            fprintf(stderr, "Error: Unknown Generic Node Type");
            break;
    }
}
