#include <stdio.h>

void Infinity () {
    int num;
    scanf("%d", &num);
    
    while (num != -1) {
        printf("%d
", num * num);
        scanf("%d", &num);
    }
    
}

int main() {
    Infinity();
}