#include "codegen.h"


extern struct symbtab *current_scope;
int stack_os = 0;

void code_generation(struct basic_block *head){
    // int string_num = 0 ;
    // temporary looping through every basic block in the function
    // printf("test"); 
    // while (head) {
    //     struct quad *quad = head->listquadbeg;
    //     while (quad){
    //         translate_quad(quad);
    //         quad = quad->next;
    //     }
    // head = head->next;
    // }
}

void translate_quad(struct quad *quad) {
    struct generic_node *result = quad->result;
    struct generic_node *src1 = quad->src1;
    struct generic_node *src2 = quad->src2;
    //stdout is the file we're writing to
    switch (quad->opcode) {
        case LOAD_OC:
            fprintf(stdout, "movl %s, %%eax\n", checkGenericNode(src1));
            fprintf(stdout, "movl (%%eax), %%ebx\n");
            fprintf(stdout, "movl %%ebx, %s\n", checkGenericNode(result));
            break;
        case STORE_OC:
            fprintf(stdout, "movl %s, %%eax\n", checkGenericNode(src1));
            fprintf(stdout, "movl %s, %%ebx\n", checkGenericNode(result));
            fprintf(stdout, "movl %%eax, (%%ebx)\n");
            break;
        // case LEA_OC:
        //     fprintf(stdout, "leal %s, %%eax\n", checkGenericNode(src1));
        //     fprintf(stdout, "movl %%eax, %s\n", checkGenericNode(result));
        //     break;
        case MULT_OC:
            fprintf(stdout, "movl %s, %%eax\n", checkGenericNode(src1));
            fprintf(stdout, "movl %s, %%ebp\n", checkGenericNode(src2));
            fprintf(stdout, "imull %%ebp, %%eax\n");
            fprintf(stdout, "movl %%eax, %s\n", checkGenericNode(result));
            break;
        case ADD_OC:
            fprintf(stdout, "movl %s, %%eax\n", checkGenericNode(src1));
            fprintf(stdout, "movl %s, %%ebp\n", checkGenericNode(src2));
            fprintf(stdout, "addl %%ebp, %%eax\n");
            fprintf(stdout, "movl %%eax, %s\n", checkGenericNode(result));
            break;
        case SUB_OC:
            fprintf(stdout, "movl %s, %%eax\n", checkGenericNode(src1));
            fprintf(stdout, "movl %s, %%ebp\n", checkGenericNode(src2));
            fprintf(stdout, "subl %%ebp, %%eax\n");
            fprintf(stdout, "movl %%eax, %s\n", checkGenericNode(result));
            break;
        case DIV_OC:
            fprintf(stdout, "movl %s, %%eax\n", checkGenericNode(src1));
            fprintf(stdout, "cltd\n");
            fprintf(stdout, "idivl %s\n", checkGenericNode(src2));
            fprintf(stdout, "movl %%eax, %s\n", checkGenericNode(result));
            break;
        case MOD_OC:
            fprintf(stdout, "movl %s, %%eax\n", checkGenericNode(src1));
            fprintf(stdout, "cltd\n");
            fprintf(stdout, "idivl %s\n", checkGenericNode(src2));
            fprintf(stdout, "movl %%edx, %s\n", checkGenericNode(result));
            break;
        case MOV_OC:
            fprintf(stdout, "movl %s, %%eax\n", checkGenericNode(src1));
            fprintf(stdout, "movl %%eax, %s\n", checkGenericNode(result));
            break;
        case CMP_OC: 
            fprintf(stdout, "movl %s, %%eax\n", checkGenericNode(src1));
            fprintf(stdout, "cmpl %s, %%eax\n", checkGenericNode(src2));
            break;
        case LTEQ_OC:
            fprintf(stdout, "jle %s", checkGenericNode(src1));
            fprintf(stdout, "jmp %s", checkGenericNode(src2));
            break;
        case NOTEQ_OC:
            fprintf(stdout, "jne %s", checkGenericNode(src1));
            fprintf(stdout, "jmp %s", checkGenericNode(src2));
            break;
        case GTEQ_OC:
            fprintf(stdout, "jge %s", checkGenericNode(src1));
            fprintf(stdout, "jmp %s", checkGenericNode(src2));
            break;
        case LT_OC:
            fprintf(stdout, "jl %s", checkGenericNode(src1));
            fprintf(stdout, "jmp %s", checkGenericNode(src2));
            break;
        case GT_OC:
            fprintf(stdout, "jg %s", checkGenericNode(src1));
            fprintf(stdout, "jmp %s", checkGenericNode(src2));
            break;
        // right
        case EQEQ_OC:
            fprintf(stdout, "je %s", checkGenericNode(src1));
            fprintf(stdout, "jmp %s", checkGenericNode(src2));
            break;
        case NTEQ_OC:
            fprintf(stdout, "jne %s", checkGenericNode(src1));
            fprintf(stdout, "jmp %s", checkGenericNode(src2));
            break;
        case SETNEQ_OC:
            fprintf(stdout, "cmpl %s, %s\n", checkGenericNode(src1), checkGenericNode(src2));
            fprintf(stdout, "setne %%al\n");
            fprintf(stdout, "movzbl %%al, %%eax\n");
            fprintf(stdout, "movl %%eax, %s\n", checkGenericNode(result));
            break;
        case SETEQ_OC:
            fprintf(stdout, "cmpl %s, %s\n", checkGenericNode(src1), checkGenericNode(src2));
            fprintf(stdout, "sete %%al\n");
            fprintf(stdout, "movzbl %%al, %%eax\n");
            fprintf(stdout, "movl %%eax, %s\n", checkGenericNode(result));
            break;
        case CALL_OC:
            fprintf(stdout, "call %s\n", checkGenericNode(src1));
            if (result != NULL) {
                fprintf(stdout, "movl %%eax, %s\n", checkGenericNode(result));
            }
            break;
        case RET_OC: 
            if (src1 != NULL) {
                fprintf(stdout, "movl %s, %%eax\n", checkGenericNode(src1));
            }
            fprintf(stdout, "ret\n");
            break;
        case SETLT_OC:
            fprintf(stdout, "cmpl %s, %s\n", checkGenericNode(src1), checkGenericNode(src2));
            fprintf(stdout, "setl %%al\n");
            fprintf(stdout, "movzbl %%al, %%eax\n");
            fprintf(stdout, "movl %%eax, %s\n", checkGenericNode(result));
            break;
        case SETGT_OC:
            fprintf(stdout, "cmpl %s, %s\n", checkGenericNode(src1), checkGenericNode(src2));
            fprintf(stdout, "setg %%al\n");
            fprintf(stdout, "movzbl %%al, %%eax\n");
            fprintf(stdout, "movl %%eax, %s\n", checkGenericNode(result));
            break;
        case SETLTEQ_OC:
            fprintf(stdout, "movl %s, %%eax\n", checkGenericNode(src1));
            fprintf(stdout, "cmpl %s, %%eax\n", checkGenericNode(src2));
            fprintf(stdout, "setle %%al\n");
            fprintf(stdout, "movzbl %%al, %%eax\n");
            fprintf(stdout, "movl %%eax, %s\n", checkGenericNode(result));
            break;
        case SETGTEQ_OC:
            fprintf(stdout, "movl %s, %%eax\n", checkGenericNode(src1));
            fprintf(stdout, "cmpl %s, %%eax\n", checkGenericNode(src2));
            fprintf(stdout, "setge %%al\n");
            fprintf(stdout, "movzbl %%al, %%eax\n");
            fprintf(stdout, "movl %%eax, %s\n", checkGenericNode(result));
            break;
        case BR_OC:
            fprintf(stdout, "jmp %s\n", checkGenericNode(src1));
            break;
        default:
            printf("dripto");
            break;
    }
}

char *checkGenericNode(struct generic_node *node){
    char* buf = (char*)malloc(50);
    switch (node->types){
        case CONSTANT_TYPE:
            // sprintf()
            // Handle the CONSTANT_TYPE case, not sure about this
            return node->value.ident;
            break;
        case REGISTER_TYPE:
            // Handle the REGISTER_TYPE case
            // would need to look both at the stack offset and the regid
            sprintf(buf, "%d(%%ebp)", (stack_os - (4 * node->value.regid)));
            break;

        case IMMEDIATE_TYPE:
            // Handle the IMMEDIATE_TYPE case
            return node->value.immediate;
            break;

        case VARIABLE_TYPE:
            // Handle the VARIABLE_TYPE case
            sprintf(buf, "%d(%%ebp)", stack_os);
            return buf;
            break;

        case BLOCK_TYPE:
            // Handle the BLOCK_TYPE c
            // dont know if this is what we're supposed to be returning
            return node->value.bb->bbname;
            break;

        case STRING_TYPE:
            // more to it do strings later
            return node->value.string;
            break;

        default:
            fprintf(stderr, "Error: Unknown Generic Node Type");
            break;
    }
}
