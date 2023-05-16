

int IsPrime(int n) {
    if (n <= 1) {
        return 0;
    }
    else if (n == 2) {
        return 1;
    } else if( n == 3) {
         return 1;
    }
    else if (n % 2 == 0) {
        return 0;
    }
    else if (n % 3 == 0) {
        return 0;
    }
    else {
        int i, flag;
        i = 5;
        flag = 0;
        while (i * i <= n) {
            if (n % i == 0 ) {
                flag = 1;

                break;
             } else if(n % (i + 2) == 0) {
                flag = 1;
                break;
             }
            i += 6;
        }
        if (flag) {
            return 0;
        } else {
            return 1;
        }
    }
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