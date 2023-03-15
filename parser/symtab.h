struct symbol {
    char *ident;
    char *filename;
    int lineno;
    struct astnode *astnode;
    struct symbol *next;
};

struct symbtab {
    struct head *symbol;
    char *scope;
};

// Create empty symbol table
struct *symbtab symbtab_init(char *scope);

// Destroy: destroy a symbol table including any storage it consumes
void symbtab_destroy(struct *symbtab table);

// Lookup: given an existing symbol table, a name, and a namespace class
// Return the associated symbol table entry, or return nothing if the symbol DNE
struct *symbtab_lookup(struct *symbtab table, )

// Enter: give an existing symbol table, a name, a namespace class, and a set of attributes
// Insert a symbol into the symbol table
void symbtab_insert(struct *symbtab table, );


