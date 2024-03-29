#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "symbtab.h"
#include "ast.h"
char *strdup(const char *s);

// extern char filename_buf[255];
// extern int lineno;
extern struct symbtab *current_scope;
int debugtable = 0;

// initialize new symbol table
struct symbtab *symbtab_init(int scope, int lineno, char *filename_buf) {
    struct symbtab *table = calloc(1, sizeof(struct symbtab));
    table->scope = scope;
    table->lineno = lineno;
    table->filename_buf = filename_buf;
    return table;
}

// free memory used by symbol table
void symbtab_destroy(struct symbtab *table) {
    free(table);
}

// traverse through stack of scopes and each symbol in each scope for a match
struct symbol *symbtab_lookup_all(struct symbtab *table, struct symbol *symbol) {
    struct symbtab *cur_table = table;
    struct symbol *cur_sym = NULL;
    while (cur_table) {
        cur_sym = cur_table->head;
        // check matching symbol name and namespace
        while (cur_sym) {
            if (strcmp(cur_sym->name, symbol->name) == 0 && cur_sym->namespace == symbol->namespace) {
                return cur_sym;
            }
            cur_sym = cur_sym->next;
        }
        cur_table = cur_table->next;
    }
    return NULL;
}

// traverse just through the current scope to find a match
struct symbol *symbtab_lookup_current(struct symbtab *table, struct symbol *symbol){
    struct symbol *cur_sym = NULL;
    cur_sym = table->head;
    while (cur_sym) {
            if (strcmp(cur_sym->name, symbol->name) == 0 && cur_sym->namespace == symbol->namespace) {
                return cur_sym;
            }
            cur_sym = cur_sym->next;
        }
    return NULL;
}

// return true if installed successfully, return false if it's already there and we don't want to replace
bool symbtab_insert(struct symbtab *table, struct symbol *symbol, bool replace) {
    // check if symb exists within the table
    struct symbol *exists = symbtab_lookup_current(table, symbol);
    if (exists) {
        if (replace) {
            // replace the definition of the symbol
            symbol->next = exists->next;
            *exists = *symbol;
        } else {
            // don't replace the definition of the symbol
            return false;
        }
    } else {
        // symbol doesnt exist within table, install it
        // placing the new symbol at the head will help with future lookups supposedly
        symbol->next = table->head;
        table->head = symbol;
    }
    return true;
}

// initialize new table and push onto stack
struct symbtab *symbtab_push(int scope, struct symbtab *prev_symbtab, int lineno, char *filename_buf) {
    struct symbtab *new_table = symbtab_init(scope, lineno, filename_buf);
    new_table->next = prev_symbtab;
    return new_table;
}

// change the current scope (new_symbtab already initialized)
struct symbtab *symbtab_insert_on(struct symbtab *current_symbtab, struct symbtab *new_symbtab) {
    new_symbtab->next = current_symbtab;
    return new_symbtab;
}

// pop current scope, free it, and prev scope becomes new current scope
struct symbtab *symbtab_pop(struct symbtab *current_scope) {
    struct symbtab *prev_scope = current_scope->next;
    struct symbtab *new_current_scope = NULL;
    if (prev_scope) {
        new_current_scope = prev_scope;
        symbtab_destroy(current_scope);
    }
    return new_current_scope;
}

// create a symbol table entry
struct symbol *create_symbol_entry(char *name, int type, int namespace, int lineno, char *filename_buf){
    struct symbol *new_symb = calloc(sizeof(struct symbol), 1);
    new_symb->name = name;
    new_symb->attr_type = type;
    new_symb->namespace = namespace;
    new_symb->filename_buf = strdup(filename_buf);
    new_symb->lineno = lineno;
    return new_symb;
}

int define_var(struct astnode *var, struct symbtab *table, int lineno, char *filename_buf, int storage_class, char *name, int stackoffset){
    struct symbol *symbol = create_symbol_entry(name, SYMB_VARIABLE_NAME, NAMESPACE_ALT, lineno, filename_buf);
    symbol->var.type = var;
    symbol->var.stor_class = storage_class;
    symbol->var.sf_offset = stackoffset;
    if(!symbtab_insert(table, symbol, false)){
        fprintf(stderr, "%s:%d Error '%s' already exists.\n", filename(filename_buf), lineno, name );
        return 1;
    } else {
        if(debugtable) {
        printf("%s is defined at %s:%d [in %s scope starting at %s:%d] as a variable with stgclass %s of type:",
        name,
       filename(filename_buf),
       lineno,
        (table->scope == SCOPE_GLOBAL) ? "global" : (table->scope == SCOPE_FUNCTION) ? "function" : (table->scope == SCOPE_STRUCT_UNION) ? "struct_union" : "block",
       filename(table->filename_buf),
       table->lineno,
      print_storage_class(storage_class)
        );
       printf("\n");
     astwalk_impl(var, 0);
    }

    }
    return 0;
}

void define_struct(struct astnode *struct_union, struct symbtab *table, int lineno, char *filename_buf, char * name, bool replace){
    struct symbol *symbol = create_symbol_entry(name, SYMB_STRUCT_UNION_TAG, NAMESPACE_TAG, lineno, filename_buf);
   // symbol->struct_union_tag.def_complete = def_complete; i think it might be better to use the one in astnode
    symbol->struct_union_tag.type = struct_union;
    if(!symbtab_insert(table, symbol, replace)){
        fprintf(stderr, "%s:%d Struct/Union '%s' already exists \n", filename(filename_buf), lineno, name);
    } else {
        if(debugtable) {
         if(struct_union->structunion.isbeing_defined) {
            printf("%s is being defined at  %s:%d  { \n", name, filename(filename_buf), lineno);
        }
        }
    }
}

// define function attributes within function symb
struct symbol *define_func(struct astnode *func, struct symbtab *table, int lineno, char *filename_buf, int storage_class, char *name){
    if(table->scope != SCOPE_GLOBAL){
        fprintf(stderr, "Cannot define function outside of global scope");
    }
    // need to finish this after AST node for function is created. replace "temp" later
    struct symbol *symbol = create_symbol_entry(name, SYMB_FUNCTION_NAME, NAMESPACE_ALT, lineno, filename_buf);
    symbol->fn.def_seen =  true;
    symbol->fn.is_inline = false; // inline is optional, not doing it
    symbol->fn.type = func;
    symbol->fn.stor_class = STG_EXTERN; // functions have storage class extern by default
    
    if(!symbtab_insert(table, symbol, false)){
        fprintf(stderr, "%s:%d Function '%s' already exists.", filename(filename_buf), lineno, name);
        free(symbol);
    } else {
        if(debugtable) {
          printf("%s is defined at %s:%d [in %s scope starting at %s:%d] as a function with stgclass %s returning and taking arguments\n",
          name,
           filename_buf,
           lineno,
       (table->scope == SCOPE_GLOBAL) ? "global" : (table->scope == SCOPE_FUNCTION) ? "function" : "block",
          table->filename_buf,
          table->lineno,
           print_storage_class(storage_class)
       ); 
           printf("\n");
       astwalk_impl(func, 0);
    }
    return symbol;
    }
}

void define_label(struct astnode *label, struct symbtab *table, int lineno, char *filename_buf, bool replace) {
    struct symbol *symbol = create_symbol_entry(label->label.ident, SYMB_LABEL, SCOPE_FUNCTION, lineno, filename_buf);
    //according to 6.2.1.3 labels have function scope
    symbol->label.type = label;
    if(!symbtab_insert(table, symbol, replace)) {
            fprintf(stderr, "Label all ready exists");
    } else {
        printf("inserted label\n");
    }


}
void print_symbtab(struct symbtab *table) {
    printf("Symbol Table:\n");
    printf("Scope: %d\n", table->scope);
    struct symbol *cur_sym = table->head;
    printf("Name     Attr Type Namespace Filename  Line Num\n");
    while (cur_sym) {
        printf("%s\t %d\t   %d\t     %s      %d\n", cur_sym->name, cur_sym->attr_type, cur_sym->namespace, cur_sym->filename_buf, cur_sym->lineno);
        switch(cur_sym->attr_type) {
            case SYMB_FUNCTION_NAME:
                astwalk_impl(cur_sym->fn.type, 0);
                break;
            case SYMB_VARIABLE_NAME:
                 astwalk_impl(cur_sym->var.type, 0);
                 break;
            case SYMB_STRUCT_UNION_TAG:
                // astwalk_impl(cur_sym->struct_union_tag.type, 0);
                break;    

            default:
            printf("NOOO  %d", cur_sym->attr_type);
                break;
        }

        cur_sym = cur_sym->next;
    }
}
void print_symb(struct symbol *cur_sym ) {
     printf("%s\t %d\t   %d\t     %s      %d\n", cur_sym->name, cur_sym->attr_type, cur_sym->namespace, cur_sym->filename_buf, cur_sym->lineno);
     switch(cur_sym->attr_type) {
            case SYMB_FUNCTION_NAME:
                astwalk_impl(cur_sym->fn.type, 0);
                break;
            case SYMB_VARIABLE_NAME:
                 astwalk_impl(cur_sym->var.type, 0);
                 break;
            case SYMB_STRUCT_UNION_TAG:
                // astwalk_impl(cur_sym->struct_union_tag.type, 0);
                break;    

            default:
            printf("NOOO  %d", cur_sym->attr_type);
                break;
        }
}
struct struct_stack *struct_stack_init(struct astnode *struct_astnode){
    struct struct_stack *struct_stack = calloc(1, sizeof(struct struct_stack));
    struct_stack->astnode = struct_astnode;
    return struct_stack;
}

struct struct_stack *struct_push(struct struct_stack *current_struct, struct astnode *struct_astnode){
    struct struct_stack *new_struct = struct_stack_init(struct_astnode);
    new_struct->next = current_struct;
    return new_struct;
}

struct struct_stack *struct_pop(struct struct_stack *current_struct){
    struct struct_stack *prev_struct = current_struct->next;
    struct struct_stack *new_current_struct = NULL;
    if (prev_struct){
        new_current_struct = prev_struct;
    }
    return new_current_struct;
}

void print_type(struct astnode *type) {
    printf("%s\n", getTypeName(type->scal.types));
}

char* getTypeName(int index) {
    switch (index) {
        case VOID_T:
            return "void";
        case CHAR_T:
            return "char";
        case SHORT_T:
            return "short";
        case INT_T:
            return "int";
        case LONG_T:
            return "long";
        case FLOAT_T:
            return "float";
        case DOUBLE_T:
            return "double";
        case SIGNED_T:
            return "signed";
        case UNSIGNED_T:
            return "unsigned";
        case _BOOL_T:
            return "_Bool";
        default:
            return "unknown";
    }
}

char *print_storage_class(int storageclass) {
    switch (storageclass) {
        case AUTO_S:
            return "auto";
            break;
        case STATIC_S:
            return "static";
            break;
        case REGISTER_S:
            return "register";
            break;
        case EXTERN_S:
            return "extern";
            break;
        case TYPEDEF_S:
            return "typedef";
            break;
        default:
            return "not applicable";
            break;
    }
}