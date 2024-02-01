#include <stdio.h>
#include <math.h>

void AbsoluteDiff(int num);

int main () {
    int num;
    scanf("%d", &num);
    AbsoluteDiff(num);
}

void AbsoluteDiff(int num) {
    int digit;
    scanf("%d", &digit);
    
    int place = pow(10, digit);
    
    int firstNum = num % place;
    
    while (num > place) {
        num /= 10;
    }
    
    printf("%d", abs(firstNum - num));
    
}