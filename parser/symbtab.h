#ifndef SYMBTAB_H
#define SYMBTAB_H

#include <stdbool.h>

// enums for symbol entry attributes
enum SCOPE {
    SCOPE_GLOBAL = 0,
    SCOPE_FUNCTION,
    SCOPE_BLOCK,
    SCOPE_PROTOTYPE,
    SCOPE_STRUCT_UNION
};

enum NAMESPACE {
    NAMESPACE_TAG = 0,
    NAMESPACE_LABEL,
    NAMESPACE_MEMBER,
    NAMESPACE_ALT
};

enum SYMB_TYPE {
    SYMB_VARIABLE_NAME = 0,
    SYMB_FUNCTION_NAME,
    SYMB_TYPEDEF_NAME,
    SYMB_ENUM_CONSTANT,
    SYMB_STRUCT_UNION_TAG,
    SYMB_ENUM_TAG,
    SYMB_LABEL,
    SYMB_STRUCT_MEMBER,
    SYMB_UNION_MEMBER
};

enum STORAGE_CLASS {
    STG_AUTO = 0,
    STG_STATIC,
    STG_EXTERN,
    STG_TYPEDEF,
    STG_REGISTER
};

enum TYPE_QUALIFIER{
    QUAL_CONST = 0,
    QUAL_VOLATILE,
    QUAL_RESTRICT,
};

enum TYPE_SPECIFIER{
    TYPE_SPEC_VOID = 0,
    TYPE_SPEC_CHAR,
    TYPE_SPEC_SHORT,
    TYPE_SPEC_INT,
    TYPE_SPEC_LONG,
    TYPE_SPEC_FLOAT,
    TYPE_SPEC_DOUBLE,
    TYPE_SPEC_SIGNED,
    TYPE_SPEC_UNSIGNED,
    TYPE_SPEC_BOOL,
    TYPE_SPEC_COMPLEX,
    TYPE_SPEC_IMAGINARY,
    TYPE_SPEC_STRUCT_UNION,
    TYPE_SPEC_ENUM
};

enum FUNCTION_SPECIFIER{
    FUNCTION_INLINE
};

enum SCALAR_SIZE {
    SCALAR_VOID = 0,
    SCALAR_CHAR = 1,
    SCALAR_SHORT = 2,
    SCALAR_INT = 4,
    SCALAR_LONG = 4,
    SCALAR_LONG_LONG = 16,
    SCALAR_FLOAT = 4,
    SCALAR_DOUBLE = 8,
    SCALAR_LONG_DOUBLE = 16
    // SCALAR_SIGNED,
    // SCALAR_UNSIGNED
};

// structs to store ident attributes: lecture notes 4 pg 5
// type, storage class, stack frame offset
struct var_atr{
    struct astnode *type;
    int stor_class;
    int sf_offset;
};

// type(return type + args), storage class, presence of inline, definiton alr seen
struct fn_name_atr{
    struct astnode *type;
    int stor_class;
    bool is_inline;
    bool def_seen;
};

// equivalent type
struct tpdef_name_atr{
    struct astnode *eq_type;
};
// value (consider linking enum tag as well)
struct enum_constant_atr{
    int value;
};
// symbol table with member def + whether defnition is complete
struct struct_union_tag_atr{
    struct astnode *type;
  //bool def_complete; contained within astnode
};
// once def is complete, store nothing
struct enum_tag_atr{
    bool def_complete;
};
// not really discussed in lecture notes
// alludes to further understanding during code gen
struct label_atr{
    struct astnode *statement; //contains statement that astnode leads to
   // bool seen; contained within astnode
};

// type, offset (Struct only), bit field width, bit offset
struct struct_union_mem_atr{
    struct astnode *type;
    int struct_offset; // only for structs
    // bitfields are optional
    // int bit_field_width;
    // int bit_offset;
};


struct symbol {
    // symbol entry information
    char *name;
    int namespace;
    int attr_type;
    // error reporting
    char *filename_buf;
    int lineno;
    // linked list
    struct astnode *astnode;
    struct symbol *next;
    // symbol attributes
    union {
        struct label_atr label;
        // enums and typedef are optional
        struct var_atr var;
        struct fn_name_atr fn;
        // struct tpdef_name_atr tpdef; 
        // struct enum_constant_atr enum_const; 
        struct struct_union_tag_atr struct_union_tag;
        // struct enum_tag_atr enum_tag; 
        // struct label_atr label;
        //struct struct_union_mem_atr struct_union_mem;
    };
};

struct symbtab {
    struct symbol *head;
    struct symbtab *next;
    int scope;
    int lineno;
    char *filename_buf;
    //maybe line and fileno as well here
};

struct struct_stack {
    struct struct_stack *next;
    struct astnode *astnode;
};

// Create empty symbol table
struct symbtab *symbtab_init(int scope, int lineno, char *filename_buf);
// Destroy: destroy a symbol table including any storage it consumes
void symbtab_destroy(struct symbtab *table);
// Lookup: given an existing symbol table, a name, and a namespace class
// Return the associated symbol table entry, or return nothing if the symbol DNE
struct symbol *symbtab_lookup_all(struct symbtab *table, struct symbol *symbol);
// Lookup within current scope
struct symbol *symbtab_lookup_current(struct symbtab *table, struct symbol *symbol); 
// Enter: give an existing symbol table, a name, a namespace class, and a set of attributes
// Insert a symbol into the symbol table
bool symbtab_insert(struct symbtab *table, struct symbol *symbol, bool replace);
// Push onto symbtable struct and return a pointer to the new symbol table
struct symbtab *symbtab_push(int scope, struct symbtab *prev_symbtab, int lineno, char *filename_buf);
// Make an existing symbol table the current scope we're working with
struct symbtab *symbtab_insert_on(struct symbtab *current_symbtab, struct symbtab *insert_symbtab);
// Pop from symbtable struct go the previous scope
struct symbtab *symbtab_pop(struct symbtab *current_scope);
// create a symbol table entry
struct symbol *create_symbol_entry(char *name, int type, int namespace, int lineno, char *filename_buf);
// define variable
// void define_var(struct astnode *var, struct symbtab *table);
// define function
void define_func(struct astnode *func, struct symbtab *table, int lineno, char *filename_buf, int storage_class, char *name);
void define_var(struct astnode *func, struct symbtab *table, int lineno, char *filename_buf, int storage_class, char *name);
// define label
void define_label(struct astnode *label, struct symbtab *table, int lineno, char *filename_buf);
// do later: stuct definition (forward declaration) and declaration (members, own symbtab).
void declare_struct();

// print out symbol table
void print_symbtab(struct symbtab *table);
void define_struct(struct astnode *struct_union, struct symbtab *table, int lineno, char *filename_buf, char * name, bool replace);
struct struct_stack *struct_stack_init(struct astnode *struct_astnode);
struct struct_stack *struct_push(struct struct_stack *current_struct, struct astnode *struct_astnode);
struct struct_stack *struct_pop(struct struct_stack *current_struct);
void print_type(struct astnode *type);
char *print_storage_class(int storageclass);
char* getTypeName(int index);
#endif