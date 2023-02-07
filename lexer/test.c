#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
char * test = "a\0\0";
char * new = strdup(test);
printf("%o", new[0]);

}