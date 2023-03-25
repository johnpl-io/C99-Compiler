## TO DO

- [x] astnodes for functions, pointers, arrays, struct (last) (John)

- [x] test that symbol table works manually (Colin)
- [ ] finish functions for initializing symbol attributes within symbtab.c (Colin)
- [x] function for printing out of the symbol table for checking (Colin)

**LATER**
- [ ] incorporate symbol table into parser (Colin + John)
- [ ] function to do edge case checks before installing into symbol table (Colin + John)


**LIST TO KEEP TRACK OF STUFF**

- still need to do struct, therefore still no function within symbtab.c to define struct/union symbols and no functionality to insert them into the symbol table
- come back to the decl spec list (6.7.0)
- ignore enums
- error checking and default behavior as given in the c standard like functions returning functions etc 
### additional comments
- declarators are laid out that that whatever is the next element after the decl name (which is always on top) will always be the type
For example, int *fn(); will be
 
```
DECL NAME FN
    FUNCTION DECL
        POINTER TO
```
- We can  use this and then declspecs to properly insert into the symbol table.
```
DECL SPECS | Storage Class -1 | Type qualifier 0 | 
Typspecifiers 
  int
```
_note -1 indicates not storage class provided so we must check within symbol table_
- Symbol scope must change with midrules otherwise it will not change at the right time. 
- im not sure if we have struct members as a type as a symbol which is a valid identifier (this can easily be added)
- for structs we can use the existing astnode for struct which contains its own symbol table. Therefore, the mini-scope is just the minitable that is contained inside the astnode. 

### Compiler progress 
![](https://geps.dev/progress/32)