#ifndef QUAD_H
#define QUAD_H
#include "../ast.h"
#include "../symbtab.h"
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
    int bb_fn; 
    struct quad *listquadbeg;
    struct basic_block *next;
    struct quad *listquadend;
   // enum condcode cc;
    int regidcount; //keep track of temp register number per basic block
};

struct generic_node {
 enum addr_type {
    CONSTANT_TYPE,
    REGISTER_TYPE,
    IMMEDIATE_TYPE,
    VARIABLE_TYPE,
    BLOCK_TYPE,
 } types;
    union addr {
        char *ident;
        int immediate;
        int regid;
        struct basic_block *value;
    } value;
    struct astnode *declspec; //store type information for checking
};

struct generic_node *gen_rvalue(struct astnode *rexpr, struct generic_node *addr, int *condcode);
struct generic_node *gen_lvalue(struct astnode *lexpr, int *mode);
struct generic_node *gen_assign(struct astnode *expr);
struct basic_block *gen_quads(struct astnode *stmtlist);
void gen_stmt(struct astnode *stmt);
//this function creates a new quad and appends it to the current list of quads 
void emit_quads(int opcode, struct generic_node *result, struct generic_node *src1, struct generic_node *src2);
void print_quads(struct quad *quad);
void print_basicblock(struct basic_block *basic_block);
void link_bb(struct basic_block *new_bb); //like hak lecture notes
struct generic_node *new_temporary();
int get_opcode(struct astnode *opcode);
char* opcode_to_string(enum opcode op);
struct basic_block *new_bb();
#endif