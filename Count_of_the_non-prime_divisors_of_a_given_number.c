#include <iostream>
#include <cmath>

int isprime(int n) {
    if (n <= 1) {
        return 0;
    }
    if (n <= 3) {
        return 1;
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int NonPrimeDivisorsCount(int num) {
    int count = 0;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0 && !isprime(i)) {
            count++;
        }
    }
    return count;
}

int main() {
    int number;
    std::cin >> number;
    
    int count = NonPrimeDivisorsCount(number);
    std::cout << count;
    
}