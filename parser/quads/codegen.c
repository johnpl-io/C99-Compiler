#include "codegen.h"


extern struct symbtab *current_scope;

void code_generation(){
    // this is definitely wrong
    struct symbol *symbol = current_scope->head;
    while (symbol){
        // how to get basic block??
        // struct basic_block *bb = symbol-
    }
}

void translate_quad(struct quad *quad) {
    struct generic_node *result = quad->result;
    struct generic_node *src1 = quad->src1;
    struct generic_node *src2 = quad->src2;
    //output is the file we're writing to
    switch (quad->opcode) {
        case LOAD_OC:
            fprintf(output, "movl %s, %%eax\n", src1->value.ident);
            fprintf(output, "movl %%eax, %s\n", result->value.ident);
            break;
        case STORE_OC:
            fprintf(output, "movl %s, %%eax\n", src1->value.ident);
            fprintf(output, "movl %%eax, %s\n", src2->value.ident);
            break;
        case LEA_OC:
            fprintf(output, "leal %s, %%eax\n", src1->value.ident);
            fprintf(output, "movl %%eax, %s\n", result->value.ident);
            break;
        case MULT_OC:
            fprintf(output, "movl %s, %%eax\n", src1->value.ident);
            fprintf(output, "imull %s, %%eax\n", src2->value.ident);
            fprintf(output, "movl %%eax, %s\n", result->value.ident);
            break;
        case ADD_OC:
            fprintf(output, "movl %s, %%eax\n", src1->value.ident);
            fprintf(output, "addl %s, %%eax\n", src2->value.ident);
            fprintf(output, "movl %%eax, %s\n", result->value.ident);
            break;
        case SUB_OC:
            fprintf(output, "movl %s, %%eax\n", src1->value.ident);
            fprintf(output, "subl %s, %%eax\n", src2->value.ident);
            fprintf(output, "movl %%eax, %s\n", result->value.ident);
            break;
        case DIV_OC:
            fprintf(output, "movl %s, %%eax\n", src1->value.ident);
            fprintf(output, "cltd\n");
            fprintf(output, "idivl %s\n", src2->value.ident);
            fprintf(output, "movl %%eax, %s\n", result->value.ident);
            break;
        case MOD_OC:
            fprintf(output, "movl %s, %%eax\n", src1->value.ident);
            fprintf(output, "cltd\n");
            fprintf(output, "idivl %s\n", src2->value.ident);
            fprintf(output, "movl %%edx, %s\n", result->value.ident);
            break;
        case MOV_OC:
            fprintf(output, "movl %s, %%eax\n", src1->value.ident);
            fprintf(output, "movl %%eax, %s\n", result->value.ident);
            break;
        case LOGAND_OC:
            fprintf(output, "movl %s, %%eax\n", src1->value.ident);
            fprintf(output, "andl %s, %%eax\n", src2->value.ident);
            fprintf(output, "movl %%eax, %s\n", result->value.ident);
            break;
        case LOGOR_OC:
            fprintf(output, "movl %s, %%eax\n", src1->value.ident);
            fprintf(output, "orl %s, %%eax\n", src2->value.ident);
            fprintf(output, "movl %%eax, %s\n", result->value.ident);
            break;
        case LOGNOT_OC:
            fprintf(output, "movl %s, %%eax\n", src1->value.ident);
            fprintf(output, "notl %%eax\n");
            fprintf(output, "movl %%eax, %s\n", result->value.ident);
            break;
        case NOT_OC:
            fprintf(output, "movl %s, %%eax\n", src1->value.ident);
            fprintf(output, "negl %%eax\n");
            fprintf(output, "movl %%eax, %s\n", result->value.ident);
            break;
        case AND_OC:
            fprintf(output, "movl %s, %%eax\n", src1->value.ident);
            fprintf(output, "andl %s, %%eax\n", src2->value.ident);
            fprintf(output, "movl %%eax, %s\n", result->value.ident);
            break;
        case OR_OC:
            fprintf(output, "movl %s, %%eax\n", src1->value.ident);
            fprintf(output, "orl %s, %%eax\n", src2->value.ident);
            fprintf(output, "movl %%eax, %s\n", result->value.ident);
            break;
        case SHL_OC:
            fprintf(output, "movl %s, %%eax\n", src1->value.ident);
            fprintf(output, "sall %s, %%eax\n", src2->value.ident);
            fprintf(output, "movl %%eax, %s\n", result->value.ident);
            break;
        case SHR_OC:
            fprintf(output, "movl %s, %%eax\n", src1->value.ident);
            fprintf(output, "sarl %s, %%eax\n", src2->value.ident);
            fprintf(output, "movl %%eax, %s\n", result->value.ident);
            break;
        case XOR_OC:
            fprintf(output, "movl %s, %%eax\n", src1->value.ident);
            fprintf(output, "xorl %s, %%eax\n", src2->value.ident);
            fprintf(output, "movl %%eax, %s\n", result->value.ident);
            break;
        case CMP_OC:
            fprintf(output, "movl %s, %%eax\n", src1->value.ident);
            fprintf(output, "cmpl %s, %%eax\n", src2->value.ident);
            break;
        case LTEQ_OC:
            fprintf(output, "movl %s, %%eax\n", src1->value.ident);
            fprintf(output, "cmpl %s, %%eax\n", src2->value.ident);
            fprintf(output, "setle %%al\n");
            fprintf(output, "movzbl %%al, %%eax\n");
            fprintf(output, "movl %%eax, %s\n", result->value.ident);
            break;
        case NOTEQ_OC:
            fprintf(output, "movl %s, %%eax\n", src1->value.ident);
            fprintf(output, "cmpl %s, %%eax\n", src2->value.ident);
            fprintf(output, "setne %%al\n");
            fprintf(output, "movzbl %%al, %%eax\n");
            fprintf(output, "movl %%eax, %s\n", result->value.ident);
            break;
        case GTEQ_OC:
            fprintf(output, "movl %s, %%eax\n", src1->value.ident);
            fprintf(output, "cmpl %s, %%eax\n", src2->value.ident);
            fprintf(output, "setge %%al\n");
            fprintf(output, "movzbl %%al, %%eax\n");
            fprintf(output, "movl %%eax, %s\n", result->value.ident);
            break;
        case LT_OC:
            fprintf(output, "movl %s, %%eax\n", src1->value.ident);
            fprintf(output, "cmpl %s, %%eax\n", src2->value.ident);
            fprintf(output, "setl %%al\n");
            fprintf(output, "movzbl %%al, %%eax\n");
            fprintf(output, "movl %%eax, %s\n", result->value.ident);
            break;
        case GT_OC:
            fprintf(output, "movl %s, %%eax\n", src1->value.ident);
            fprintf(output, "cmpl %s, %%eax\n", src2->value.ident);
            fprintf(output, "setg %%al\n");
            fprintf(output, "movzbl %%al, %%eax\n");
            fprintf(output, "movl %%eax, %s\n", result->value.ident);
            break;
        case EQEQ_OC:
            fprintf(output, "movl %s, %%eax\n", src1->value.ident);
            fprintf(output, "cmpl %s, %%eax\n", src2->value.ident);
            fprintf(output, "sete %%al\n");
            fprintf(output, "movzbl %%al, %%eax\n");
            fprintf(output, "movl %%eax, %s\n", result->value.ident);
            break;
        case NTEQ_OC:
            fprintf(output, "movl %s, %%eax\n", src1->value.ident);
            fprintf(output, "cmpl %s, %%eax\n", src2->value.ident);
            fprintf(output, "setne %%al\n");
            fprintf(output, "movzbl %%al, %%eax\n");
            fprintf(output, "movl %%eax, %s\n", result->value.ident);
            break;
        case SETNEQ_OC:
            fprintf(output, "movl %s, %%eax\n", src1->value.ident);
            fprintf(output, "cmpl %s, %%eax\n", src2->value.ident);
            fprintf(output, "setne %%al\n");
            fprintf(output, "movzbl %%al, %%eax\n");
            fprintf(output, "movl %%eax, %s\n", result->value.ident);
            break;
        case SETEQ_OC:
            fprintf(output, "movl %s, %%eax\n", src1->value.ident);
            fprintf(output, "cmpl %s, %%eax\n", src2->value.ident);
            fprintf(output, "sete %%al\n");
            fprintf(output, "movzbl %%al, %%eax\n");
            fprintf(output, "movl %%eax, %s\n", result->value.ident);
            break;
        case CALL_OC:
            fprintf(output, "call %s\n", src1->value.ident);
            if (result != NULL) {
                fprintf(output, "movl %%eax, %s\n", result->value.ident);
            }
            break;
        case RET_OC:
            if (src1 != NULL) {
                fprintf(output, "movl %s, %%eax\n", src1->value.ident);
            }
            fprintf(output, "ret\n");
            break;
        case SETLT_OC:
            fprintf(output, "movl %s, %%eax\n", src1->value.ident);
            fprintf(output, "cmpl %s, %%eax\n", src2->value.ident);
            fprintf(output, "setl %%al\n");
            fprintf(output, "movzbl %%al, %%eax\n");
            fprintf(output, "movl %%eax, %s\n", result->value.ident);
            break;
        case SETGT_OC:
            fprintf(output, "movl %s, %%eax\n", src1->value.ident);
            fprintf(output, "cmpl %s, %%eax\n", src2->value.ident);
            fprintf(output, "setg %%al\n");
            fprintf(output, "movzbl %%al, %%eax\n");
            fprintf(output, "movl %%eax, %s\n", result->value.ident);
            break;
        case SETLTEQ_OC:
            fprintf(output, "movl %s, %%eax\n", src1->value.ident);
            fprintf(output, "cmpl %s, %%eax\n", src2->value.ident);
            fprintf(output, "setle %%al\n");
            fprintf(output, "movzbl %%al, %%eax\n");
            fprintf(output, "movl %%eax, %s\n", result->value.ident);
            break;
        case SETGTEQ_OC:
            fprintf(output, "movl %s, %%eax\n", src1->value.ident);
            fprintf(output, "cmpl %s, %%eax\n", src2->value.ident);
            fprintf(output, "setge %%al\n");
            fprintf(output, "movzbl %%al, %%eax\n");
            fprintf(output, "movl %%eax, %s\n", result->value.ident);
            break;
        case BR_OC:
            fprintf(output, "jmp %s\n", src1->value.ident);
            break;
        default:
            printf("dripto")
            break;
    }
}
