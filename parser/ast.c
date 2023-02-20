struct *astnode newNum(int nodetype, int num) {
    int nodetype = nodetype;
    struct *numast malloc(sizeof(struct astnode));
    numast->num.number = num;
    numast->num.nodetype = nodetype;
    return numast;
};

struct *astnode newIdent(int nodetype, char *ident);
struct *astnode newString(int nodetype, char *string);
primary-expresion : ident 
                    primary-expression '+' primary-expression { $$ = newast(prim, $1, $3); $$->operator = '+';}
                    a+b 
                    a->ident + b->ident node

struct *astnode newast(int nodetype, struct *astnode l, struct *astnode *r) {
    
};