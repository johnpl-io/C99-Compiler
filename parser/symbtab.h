#include <stdbool.h>
#include "ast.h"

enum SCOPE {
    SCOPE_GLOBAL,
    SCOPE_FUNCTION,
    SCOPE_BLOCK,
    SCOPE_PROTOTYPE,
    SCOPE_STRUCT_UNION
};

enum NAMESPACE {
    NAMESPACE_TAG,
    NAMESPACE_LABEL,
    NAMESPACE_MEMBER,
    NAMESPACE_ALT,
};

struct symbol {
    char *name;
    int namespace;
    char *filename;
    int lineno;
    struct astnode *astnode;
    struct symbol *next;
};

struct symbtab {
    struct symbol *head;
    struct symbtab *next;
    int scope;
};

// Create empty symbol table
struct symbtab *symbtab_init(int scope);

// Destroy: destroy a symbol table including any storage it consumes
void symbtab_destroy(struct symbtab *table);

// Lookup: given an existing symbol table, a name, and a namespace class
// Return the associated symbol table entry, or return nothing if the symbol DNE
struct symbol *symbtab_lookup(struct symbtab *table, struct symbol *symbol);

// Enter: give an existing symbol table, a name, a namespace class, and a set of attributes
// Insert a symbol into the symbol table
bool symbtab_insert(struct symbtab *table, struct symbol *symbol, bool replace);

// Push onto symbtable struct and return a pointer to the new symbol table
struct symbtab *symbtab_push(int scope, struct symbtab *prev_symbtab);

// Make an existing symbol table the current scope we're working with
struct symbtab *symbtab_insert_on(struct symbtab *current_symbtab, struct symbtab *insert_symbtab);

// Pop from symbtable struct go the previous scope
struct symbtab *symbtab_pop(struct symbtab *current_scope);