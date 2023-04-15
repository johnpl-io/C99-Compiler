#ifndef AST_H
#define AST_H
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
    AST_NODE_TYPE_DECL,
    AST_NODE_TYPE_FNDCL,
    AST_NODE_TYPE_ARRAYDCL,
    AST_NODE_TYPE_STRUCT,
    AST_NODE_TYPE_UNION, 
    AST_NODE_TYPE_DECLARATION,
    AST_NODE_TYPE_IFELSE,
    AST_NODE_TYPE_SWITCH,
    AST_NODE_TYPE_WHILE,
    AST_NODE_TYPE_FOR,
    AST_NODE_TYPE_BREAK,
    AST_NODE_TYPE_LABEL,
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
struct astnode_label {
   int nodetype;
   struct astnode *statement;
   struct astnode *left, *right; //onlify needed 

};

struct astnode_ident {
    int nodetype;
    char *string;
    struct symbol *symbol;
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
//declarations 
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

struct astnode_functdecl{
    int nodetype;
    struct astnode *returntype;
    struct astnode *parameters;
    struct astnode *next; //is return type
};
struct astnode_decl {
    char *ident;
    int lineno; 
    struct astnode *next;
    

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

struct astnode_structunion {
    int nodetype;
    char *name;
    int is_complete;
    char *filename; 
    int lineno;
    int isbeing_defined; //struct is being defined
    struct astnode *next;
    struct symbtab *minitable; //mini symbol table for struct or union  
};


struct astnode_declaration {
    int nodetype;
    struct astnode *declspec;
    struct astnode *decl;
};


//statements 
struct astnode_ifelse {
    int nodetype;
    struct astnode *IF;
    struct astnode *THEN;
    struct astnode *ELSE;
    struct astnode *next;

};
struct astnode_switch {
    int nodetype;
    struct astnode *expr;
    struct astnode *body;
    struct astnode *next;
};
struct astnode_while {
int nodetype;
 int isdowhile; 
    struct astnode *body; 
    struct astnode *expression; 
    struct astnode *next;
};

struct astnode_for {
    int nodetype;
    struct astnode *init;
    struct astnode *cond;
    struct astnode *incr;
    struct astnode *body;
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
    struct astnode_decl  decl;
    struct astnode_functdecl fndcl;
    struct astnode_structunion structunion;
    struct astnode_declaration declaration;
    struct astnode_ifelse ifelse;
     struct astnode_switch switchstmt;
     struct astnode_while whilestmt;
     struct astnode_for forstmt;
    };  
   struct astnode *head, *tail;
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
struct astnode *newDeclar(int nodetype, char *ident);
struct astnode *newFunctDecl(struct astnode *parameters);
struct astnode *newStructUnion(int nodetype, char *name, struct symbtab *minitable, char *filename, int lineno, int isBeingDefined);
struct astnode *newDeclaration(int nodetype, struct astnode *declspecs, struct astnode *declar);
struct astnode *newifelse(struct astnode *IF, struct astnode *THEN, struct astnode *ELSE);
struct astnode *newswitch(struct astnode *expr, struct astnode *body);
struct astnode *newwhile(int isdoWhile, struct astnode *expr, struct astnode *stmt);
struct astnode *newfor(struct astnode *init, struct astnode *cond, struct astnode *incr, struct astnode *body);
char * filename(char * filename);
#endif