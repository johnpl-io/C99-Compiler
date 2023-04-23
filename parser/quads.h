#include "ast.h"
enum opcode {
    LOAD, STORE, LEA,
    MULT, ADD, SUB, DIV, MOD,
    MOV,
    LOGAND, LOGOR, LOGNOT,
    NOT, AND, OR, SHL, SHR, XOR
    CMP, LTEQ, GTEQ, LT, GT, EQEQ, NTEQ,
    CALL,
    RET,
};

struct quad {
    struct quad *next;
    struct generic_node *result, *src1, *src2;
    enum opcode opcode;
};

struct basic_block {
    char *bbname;
    int bb_no,
   struct quad *list,
    struct basic_block *next;
};

struct generic_node {
    enum generic_node {
    } type;
    union addr {
        struct astnode *variable,
        int immediate;
        int regid;
    } value;
    struct astnode *decl; //maybe not needed
};



struct addr *gen_rvalue(struct astnode *expr, struct generic_node *addr);
gen_lvalue();
gen_assign();
struct basic_block *gen_quads(struct astnode *stmtlist); 