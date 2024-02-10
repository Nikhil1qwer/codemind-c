#include <iostream>
#include <cmath>

int Sumsquare(int num) {
    int sum = 0;
    for(int i = 1; i <= num; i++) {
        sum += pow(i, 2);
    }
    return sum;
}

int Squaresum(int num) {
    int sum = 0;
    for(int i = 1; i <= num; i++) {
        sum += i;
    }
    return pow(sum, 2);
}

int main() {
    int num;
    std :: cin >> num;
    
    int SumSquare = Sumsquare(num);
    int SquareSum = Squaresum(num);
    
    int diff = SquareSum - SumSquare;
    std :: cout << diff << std :: endl;
    
    return 0;
}