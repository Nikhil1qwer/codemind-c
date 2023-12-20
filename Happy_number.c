#include <stdio.h>

int isHappy(int num) {
    
    while (num != 1 && num != 7) {
        int sum = 0;
        
        while (num > 0) {
            int digit = num % 10;
            sum += digit * digit;
            num /= 10;
        }
        
        num = sum;
        
        if (num < 10 && num != 1 && num != 7) {
            return 0;
        }
    }
    
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    
    if (isHappy(n)) {
        printf("True");
    } else {
        printf("False");
    }
    
}
