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
    AST_NODE_TYPE_SCALAR,
    AST_NODE_TYPE_STORAGE,
    AST_NODE_TYPE_POINTER,
    AST_NODE_TYPE_QUALIFIER,
    AST_NODE_TYPE_DECLSPEC,
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

struct astnode_scalar {
    int nodetype;
    enum {
        VOID_T,
        CHAR_T,
        SHORT_T,
        INT_T,
        LONG_T,
        FLOAT_T,
        DOUBLE_T,
        SIGNED_T,
        UNSIGNED_T,
        _BOOL_T,
    } types;
    struct astnode *next;
};

struct astnode_pointer {
    int nodetype;
    int typequal;
    struct astnode *next;
};
struct astnode_declspec {
    int storageclass;
    int typequal;
    int functionspec;
    struct astnode *typespecif;
    struct astnode *next;
};
    

struct astnode_storage {
    int nodetype;
    enum {
        TYPEDEF_S,
        EXTERN_S,
        STATIC_S,
        AUTO_S,
        REGISTER_S,
    } types;
    struct astnode *next; 
};
struct astnode_arraydecl{

    int nodetype;
    struct astnode *array_size;
    struct astnode *next;
};
struct astnode_decl {
    char *ident;

};


struct astnode_typequal {
    int nodetype; 
    enum {
        CONST_T,
        VOLATILE_T,
        RESTRICT_T,
    } types;
    struct astnode *next;
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
    struct astnode_scalar scal;
    struct astnode_storage storage;
    struct astnode_pointer ptr;
     struct astnode_declspec declspec;
     struct astnode_typequal qualifier;
       struct astnode_arraydecl arraydecl;
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
struct astnode *newType(int nodetype, int type);
struct astnode *newDecl(int nodetype, struct astnode *val);
struct astnode *newArrayDecl(struct astnode *size);