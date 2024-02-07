#include <stdio.h>
#include <stdlib.h>

int main() {
    char num1[1001];
    scanf("%s", num1);
    
    char num2[1001];
    scanf("%s", num2);
    
    long long a = atoi(num1);
    long long b = atoi(num2);
    
    printf("%lld
", a * b);
    
}