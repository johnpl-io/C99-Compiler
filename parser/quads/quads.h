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
    CMP_OC, LTEQ_OC, NOTEQ_OC, GTEQ_OC, LT_OC, GT_OC, EQEQ_OC, NTEQ_OC, SETNEQ_OC, SETEQ_OC,
    CALL_OC,
    RET_OC, 
    SETLT_OC, SETGT_OC, SETLTEQ_OC, SETGTEQ_OC, BR_OC, ARG, ARGBEGIN, //unconditional branch
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
    int stack_offset; //for head basic block 
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
    STRING_TYPE,                
 } types;
    union addr {
        char *ident;
        int immediate;
        int regid;
        char *string;
        struct basic_block *bb;
    } value;
    struct astnode *declspec; //store type information for checking
   int storage_class;
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
void link_bb(int condcode, struct basic_block *bbtrue, struct basic_block *bbfalse); //like hak lecture notes
struct generic_node *new_temporary();
int get_opcode(struct astnode *opcode);
char* opcode_to_string(enum opcode op);
struct basic_block *new_bb();
struct generic_node *function_call(struct astnode *functioncall);
 struct generic_node *newbb_node(struct basic_block *basic_block);
#endif