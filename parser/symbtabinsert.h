#ifndef SYMBTAB_INSERT
#define SYMBTAB_INSERT

void symbent_combine(struct astnode *declspecs, struct astnode *declars, int lineno, char *filename_buf, struct symbtab *symbtab);
//combines elements inside a struct or union required for new definitions of structs or unions inside of structs
void symbent_combinesu(struct astnode *declspecs, struct astnode *declars, int lineno, char *filename_buf, struct symbtab *structscope, struct symbtab *curscope);



#endif