#ifndef SYMBTAB_INSERT
#define SYMBTAB_INSERT

void symbent_combine(struct astnode *declspecs, struct astnode *declars, int lineno, char *filename_buf, struct symbtab *curscope, struct symbtab *outscopeforstruct);
//combines elements inside a struct or union required for new definitions of structs or unions inside of structs


void symbent_combine_fn(struct astnode *fn_parameters, int lineno, char *filename_buf, struct symbtab *curscopefn);

#endif