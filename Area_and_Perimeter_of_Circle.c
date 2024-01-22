#include <stdio.h>

#define pi 3.14

int main() {
    int r;
    scanf("%d", &r);
    
    printf("%.2f
%.2f ",(float) pi * r * r,(float) 2 * pi * r);
    
}