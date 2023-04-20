struct a { int y; };
struct b { int x; };
int main() {
struct b;
struct c {
    struct a *b;
    struct b *c;
    struct c *d;
    union un {
        int x;
    } z;
};
struct b {
    int x;
} test2;
union un test;
}
