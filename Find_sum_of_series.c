#include <stdio.h>

int main() {
    float n;
    scanf("%f", &n);
    float sum = 0.0;
    for ( float i = 1.0; i <= n; i++)
    {
        sum += 1.0 / i;
    }
    printf("%.2f",sum);
}
