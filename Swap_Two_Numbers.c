#include <stdio.h>

void swap (int* a, int* b) {
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

void print (int a, int b) {
    printf("%d
%d", a, b);
}

int main () {
    int a, b;
    scanf("%d %d", &a, &b);
    swap(&a, &b);
    print(a, b);
}