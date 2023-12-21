#include <stdio.h>

int Winner(int M, int N) {
    
    if (M < 2 || N < 2) {
        return 2;
    }

    return (M % 2 == 0 || N % 2 == 0) ? 1 : 2;
}

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    int winner = Winner(m, n);

    printf("Player %d",winner);

}
