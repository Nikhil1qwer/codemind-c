#include <stdio.h>

int CountDigits (int num) {
    int count = 0;
    while(num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

int main() {
    int num;
    scanf("%d", &num);
    printf("%d", CountDigits(num));
}