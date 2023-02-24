enum AstNodeType {
    AST_NODE_TYPE_BINOP,
    AST_NODE_TYPE_TENOP,
    AST_NODE_TYPE_UNOP,
    AST_NODE_TYPE_NUM,
    AST_NODE_TYPE_IDENT,
    AST_NODE_TYPE_STRING,
    // add more types as needed
};

struct astnode_unop {
    int nodetype;
    int operator;
    struct astnode *left, *right;
};

struct astnode_binop {
    int nodetype;
    int operator;
    struct astnode *left, *right;
};

struct astnode_tenop {
    int nodetype;
    int operator;
    struct astnode *left, *right;
};

struct astnode_num {
    int nodetype;
    int number;
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
    struct astnode_unop unop;
    struct astnode_num   num;
    struct astnode_ident ident;
    };  
};



struct astnode *newast(int nodetype, struct astnode *l, struct astnode *r);
struct astnode *newNum(int nodetype, int num);
struct astnode *newIdent(int nodetype, char *ident);
void astwalk_impl(struct astnode *ast, int depth);


