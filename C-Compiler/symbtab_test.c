#include <stdio.h>
#include "symbtab.h"

int main() {
    struct symbtab *table = symbtab_init(SCOPE_GLOBAL);

    // test inserting symbols
    struct symbol *s1 = create_symbol_entry("x", SYMB_VARIABLE_NAME, NAMESPACE_TAG);
    struct symbol *s2 = create_symbol_entry("y", SYMB_FUNCTION_NAME, NAMESPACE_LABEL);
    struct symbol *s3 = create_symbol_entry("z", SYMB_STRUCT_TAG, NAMESPACE_ALT);
    // duplicate symbol entry
    struct symbol *s4 = create_symbol_entry("x", SYMB_VARIABLE_NAME, NAMESPACE_TAG);

    bool inserted1 = symbtab_insert(table, s1, true);
    bool inserted2 = symbtab_insert(table, s2, true);
    bool inserted3 = symbtab_insert(table, s3, true);
    // false meaning we do NOT want to over write an already existing entry
    bool inserted4 = symbtab_insert(table, s4, false);

    printf("Symbol inserted: %d\n", inserted1); // should print 1
    printf("Symbol inserted: %d\n", inserted2); // should print 1
    printf("Symbol inserted: %d\n", inserted3); // should print 1
    printf("Symbol inserted: %d\n", inserted4); // should print 0

    // test looking up symbols
    struct symbol *lookup1 = symbtab_lookup(table, s1);
    struct symbol *lookup2 = symbtab_lookup(table, s2);
    struct symbol *lookup3 = symbtab_lookup(table, s3);

    // file name and lineno hard coded to be temp and 0 for now
    printf("Lookup: %s, %d, %d, %s, %d\n", lookup1->name, lookup1->attr_type, lookup1->namespace, lookup1->filename, lookup1->lineno); 
    printf("Lookup: %s, %d, %d\n", lookup2->name, lookup2->attr_type, lookup2->namespace); 
    printf("Lookup: %s, %d, %d\n", lookup3->name, lookup3->attr_type, lookup3->namespace); 

    // test pushing and popping symbol tables
    struct symbtab *table2 = symbtab_push(SCOPE_STRUCT_UNION, table);
    struct symbtab *table3 = symbtab_push(SCOPE_BLOCK, table2);
    printf("Scope: %d\n", table->scope); // print 0 for global
    printf("Scope: %d\n", table2->scope); // print 4 for struct_union
    printf("Scope: %d\n", table3->scope); // print 2 for block

    // pop will pop the current scope (should be 2 for table 3)
    // and return the new current scope (should be 4 for table 2)
    struct symbtab *new_scope = symbtab_pop(table3);
    printf("New Scope: %d\n", new_scope->scope); // should print 1 (popped from table3)

    // test printing symbol table
    print_symbtab(table);

    // free memory
    symbtab_destroy(table);

    return 0;
}