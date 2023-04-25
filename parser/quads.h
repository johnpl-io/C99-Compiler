#ifndef QUAD_H
#define QUAD_H
#include "ast.h"

enum opcode {
    LOAD_OC, STORE_OC, LEA_OC,
    MULT_OC, ADD_OC, SUB_OC, DIV_OC, MOD_OC,
    MOV_OC,
    LOGAND_OC, LOGOR_OC, LOGNOT_OC,
    NOT_OC, AND_OC, OR_OC, SHL_OC, SHR_OC, XOR_OC,
    CMP_OC, LTEQ_OC, GTEQ_OC, LT_OC, GT_OC, EQEQ_OC, NTEQ_OC,
    CALL_OC,
    RET_OC,
};

struct quad {
    struct quad *next;
    struct generic_node *result, *src1, *src2;
    enum opcode opcode;
};

struct basic_block {
    char *bbname;
    int bb_no;
   struct quad *list;
    struct basic_block *next;
};

struct generic_node {
 enum addr_type {
    CONSTANT_TYPE,
    REGISTER_TYPE,
    IMMEDIATE_TYPE,
 } types;
    union addr {
        struct astnode *variable;
        int immediate;
        int regid;
    } value;
    struct astnode *decl; //maybe not needed
};



struct generic_node *gen_rvalue(struct astnode *rexpr, struct generic_node *addr);
struct generic_node *gen_lvalue(struct astnode *lexpr, int *mode);
//gen_assign();
struct basic_block *gen_quads(struct astnode *stmtlist);

struct basic_block *newbasicblock();
int test();
#endif