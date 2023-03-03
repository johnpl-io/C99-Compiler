#define POSTINC 500
#define POSTDEC 501
#include "parser.tab.h"

enum AstNodeType {
    AST_NODE_TYPE_BINOP,
    AST_NODE_TYPE_TENOP,
    AST_NODE_TYPE_UNOP,
    AST_NODE_TYPE_NUM,
    AST_NODE_TYPE_IDENT,
    AST_NODE_TYPE_STRING,
    AST_NODE_TYPE_CHARLIT,
    AST_NODE_TYPE_FN,
    AST_NODE_TYPE_LL,
    // add more types as needed
};
struct astnode_linkedlist {
    int nodetype;
    struct astnode *data; 
    struct astnode *next;
    struct astnode *head;
};

struct astnode_charlit {
    int nodetype;
    char val;
    struct astnode *left, *right;
};

struct astnode_unop {
    int nodetype;
    int operator;
    struct astnode *left, *right;
};


struct astnode_fn {
    int nodetype;
    struct astnode *left, *ll;
};
struct astnode_binop {
    int nodetype;
    int operator;
    struct astnode *left, *right;
};

struct astnode_tenop {
    int nodetype;
    int operator;
    struct astnode *left, *middle, *right;
};

struct astnode_num {
    int nodetype;
   struct Num number;
    struct astnode *left, *right;
};

struct astnode_ident {
    int nodetype;
    char *string;
    struct astnode *left, *right;
};

struct astnode {
int nodetype;
union {
    struct astnode_binop binop;
    struct astnode_tenop tenop;
    struct astnode_fn fn;
    struct astnode_unop unop;
    struct astnode_num   num;
    struct astnode_ident ident;
    struct astnode_linkedlist ll;
    struct astnode_charlit charl;
    };  
};



struct astnode *newast(int nodetype, struct astnode *l, struct astnode *r, int operator);
struct astnode *newNum(int nodetype, struct Num num);
struct astnode *newIdent(int nodetype, char *ident);
void astwalk_impl(struct astnode *ast, int depth);
struct astnode *newTenop(int nodetype, struct astnode *l, struct astnode *m, struct astnode *r);
struct astnode *insertElement(int nodetype, struct astnode *astnode, struct astnode *next);
struct astnode *insertElementorig(int nodetype, struct astnode *astnode);
struct astnode *newCharlit(int nodetype, char val);