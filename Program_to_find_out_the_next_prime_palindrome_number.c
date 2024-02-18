#include <stdio.h>
#include <math.h>

int isprime(int num) {
    if(num < 2) {
        return 0;
    }
    if(num < 4) {
        return 1;
    }
    if(num % 2 == 0 || num % 3 == 0) {
        return 0;
    }
    for(int i = 2; i <= sqrt(num); i++) {
        if(num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int ispalindrome(int num) {
    int rev = 0;
    int temp = num;
    while(temp != 0) {
        int digit = temp % 10;
        rev = rev * 10 + digit;
        temp /= 10;
    }
    return (rev == num);
}

int next_palindrome(int num) {
    int next = num + 1;
    
    while(1) {
        if(ispalindrome(next) && isprime(next)) {
            return next;
        } else {
            next++;
        }
    }
}

int main() {
    int num;
    scanf("%d", &num);
    
    int palindrome = next_palindrome(num);
    printf("%d", palindrome);
    return 0;
}