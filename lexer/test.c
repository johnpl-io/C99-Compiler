#include <stdlib.h>
#include <stdio.h>
int main() {
    char * test = "0x0.3P10";
    double number = strtod(test, NULL);
    printf("%f", number);
}