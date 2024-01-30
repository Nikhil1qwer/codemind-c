#include <stdio.h>

int printUptoN (int strt, int end) {
    if (strt > end) {
        return 0;
    }
    
    if (strt % 2 == 0) {
        printf("%d ", strt);
    }
    
    strt++;
    return printUptoN(strt, end);
}

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    
    printUptoN(num1, num2);
    
}