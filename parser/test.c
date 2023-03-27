#include <stdio.h>


int main() {
struct leaf; 
const struct leaf p; //replace
}
// check if type struct
// do lookup and see if struct already exists in symbtab
// if it doesn't exist in the symbtab, and we aren't defining it, it's in the form struct a *b( check if pointer if not, error)
// install into symbtab