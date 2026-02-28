int printf(const char *fmt, ...);

int main() {
    int a[5];
    a[0] = 10;
    a[1] = 20;
    a[2] = 30;
    a[3] = 40;
    a[4] = 50;
    printf("%d\n", a[1,2,3]); // prints 40 (same as a[3])
    return 0;
}
