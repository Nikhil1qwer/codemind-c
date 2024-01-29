#include <stdio.h>

void printBinary(int n) {
    
    int size = (1 << n) - 1;
    
    for (int i = 0; i <= size; i++) {
        for (int j = n - 1; j >= 0; j--) {
            int bit = (i >> j) & 1;
            printf("%d", bit);
        }
            printf("
");
    }
    
}

int main() {
    int digit;
    scanf("%d", &digit);
    
    printBinary(digit);
    
}