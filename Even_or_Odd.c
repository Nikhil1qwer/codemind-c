#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    
    if(num & 1) {
        printf("Odd
");
    } else {
        printf("Even
");
    }
    
    return 0;
}