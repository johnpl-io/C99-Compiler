//euclids algorthm 
int gcd(int a, int b) {
    if (b == 0)
        return a;
            
        return gcd(b, a % b);
}

int main() {
    int num1, num2;
    
    printf("Enter two numbers to find GCD of: ");
    scanf("%d %d", &num1, &num2);
    int result;
    result =  gcd(num1, num2);

    printf("GCD: %d\n", result);

    return 0;
}
