#include <iostream>
#include <cmath>

int main() {
    int num;
    std :: cin >> num;
    
    while(num != -1) {
        std :: cout << pow(num, 2) << std :: endl;
        std :: cin >> num;
    }
    
    return 0;
}