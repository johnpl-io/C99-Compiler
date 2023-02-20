struct astnode {
int nodetype;
union {
    struct astnode_binop binop;
    struct astnode_tenop tenop;
    struct astnode_unop unop;
    struct struct_num   num;
    struct astnode_ident ident;
    }   
}

struct astnode_unop {
    int nodetype;
    int operator;
    struct astnode *left, *right;
}

struct astnode_binop {
    int nodetype;
    int operator;
    struct astnode *left, *right;
}

struct astnode_tenop {
    int nodetype;
    int operator;
    struct astnode *left, *right;
}

struct astnode_num {
    int nodetype;
    int number;
    struct astnode *left, *right;
}

struct astnode_ident {
    int nodetype;
    char *string;
    struct astnode *left, *right;
}


struct *astnode newast(int nodetype, struct *astnode l, struct *ast *r);
struct *astnode newNum(int nodetype, int num);
struct *astnode newIdent(int nodetype, char *ident);
struct *astnode newString(int nodetype, char *string);
void astwalk(struct *astnode);

