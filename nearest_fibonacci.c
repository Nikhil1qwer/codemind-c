#include <stdio.h>
#include <stdlib.h>


int main() {
    int num;
    scanf("%d", &num);
    
    int fib[100], count = 0;
    int a = 0, b = 1, c;
    
    while (a <= num) {
        fib[count++] = a;
        c = a + b;
        a = b;
        b = c;
    }
    
    fib[count++] = a;
        c = a + b;
        a = b;
        b = c;
        
        if ( abs (fib[count - 1] - num ) == abs (fib[count - 2] - num) ) {
            printf("%d %d", fib[count - 2], fib[count - 1]);
        } else if (abs (fib[count - 1] - num ) < abs (fib[count - 2] - num)) {
            printf("%d", fib[count - 1]);
        } else {
            printf("%d",fib[count - 2]);
        }
        
}
