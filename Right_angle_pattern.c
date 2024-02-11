#include <stdio.h>

int main() {
    int n, s;
    scanf("%d %d", &n, &s);
    
    int num = n * (n + 1) / 2 - 1;
    num = num + s;
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j < i; j++) {
            printf("  ");
        }
        for(int k = i; k <= n; k++) {
            if(i == 1 || i == k || k == n) {
                printf("%d ", num);
                num--;
            } else {
                printf("  ");
                num--;
            }
        }
        printf("
");
    }
}