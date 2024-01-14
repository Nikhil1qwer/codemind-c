#include <stdio.h>

int main () {
    char str[2024];
    scanf("%[^
]", str);
    
    int a, b;
    scanf("%d %d", &a, &b);
    
    for (int i = a; i <= b; i++) {
        printf("%c", str[i]);
    }
    
}