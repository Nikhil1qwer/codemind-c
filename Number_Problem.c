#include <stdio.h>
#include <math.h>

int main () {
    int a, b;
    scanf("%d %d", &a, &b);
    
    int c = abs(a - b);
    int d = (c % 10 == 0) ? c / 10: c / 10 + 1;
    printf("%d", d);
    
}