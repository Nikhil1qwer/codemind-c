#include <stdio.h>

void AddDisplay(int a, int b) {
    printf("%d", a + b);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    AddDisplay(a, b);
}