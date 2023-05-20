int main() {
	int a,b, c, *p, z[10][20][40]; 
	a = 5;
	b = 2;
	if(c = a > b) {
		printf("a > b\n");
	}
		printf("c is %d\n", c);
	p = &a;

    *p = 2;
    printf("p is %p *p is %d a is %d &a is %p\n", p, *p, a, &a);
    printf("size of \\0\\0\\0 %d\n", sizeof("\0\0\0"));
    printf("size of array a %d\n", sizeof(z));
    printf("size of %d \n", sizeof(long int long));
 z[5][2][3] = 6;
    printf("z[5][2][3] =  %d\n", z[5][2][3]);
a = 1;
b = 1;
        if(a&&b) {
            printf("a and b are true\n");
        }
        b = 0;
        if(a&&b) {
                   printf("a or b are true again\n");
        } 

        int i;
        for(i = 0; i<=10;i++) {
            printf("random number : %d : %d \n", i, rand());
        }
	return 0;
}