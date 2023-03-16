#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "symbtab.h"
#include "parser.tab.h"

// initialize new symbol table
struct symbtab *symbtab_init(int scope) {
    struct symbtab *table = calloc(1, sizeof(struct symbtab));
    table->scope = scope;
    return table;
}

// free memory used by symbol table
void symbtab_destroy(struct symbtab *table) {
    struct symbol *cur = table->head;
    while (cur) {
        struct symbol *next = cur->next;
        free(cur->name);
        free(cur->namespace);
        free(cur->filename);
        free(cur);
        cur = next;
    }
    free(table);
}

// traverse through stack of scopes and each symbol in each scope for a match
struct symbol *symbtab_lookup(struct symbtab *table, struct symbol *symbol) {
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

// return true if installed successfully, return false if it's already there and we don't want to replace
bool symbtab_insert(struct symbtab *table, struct symbol *symbol, bool replace) {
    // check if symb exists within the table
    struct symbol *exists = symbtab_lookup(table, symbol);
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
struct symbtab *symbtab_push(int scope, struct symbtab *prev_symbtab) {
    struct symbtab *new_table = symbtab_init(scope);
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