int IsPrime(int n) {
    if (n <= 1) 
        return 0;
    
    if (n == 2)
        return 1;
    
    if (n == 3)
        return 1;
    
    if (n % 2 == 0)
        return 0;
    
    if (n % 3 == 0)
        return 0;
    
    int i;
    i = 5;
    while (i * i <= n) {
        if (n % i == 0)
            return 0;
        
        if (n % (i + 2) == 0)
            return 0;
        
        i += 6;
    }
    
    return 1;
}


int main () {
   int i, s;
for (i = 0; i <= 100; i++) {
   s = IsPrime(i);
   if(s)
    printf("%d ", i);
}
printf("\n");
return 0;
}