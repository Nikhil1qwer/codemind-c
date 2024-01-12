#include <stdio.h>

int main () {
    int a,b;
    scanf("%d %d", &a, &b);
    
    int count = 0;
    while (a % b != 0) {
        count++;
        a++;
    }
    printf("%d", count);
}