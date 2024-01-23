#include <iostream>

using namespace std;
int sum(int n);

int main() {
    int num;
    cin >> num;
    cout << sum(num) << endl;
}

int sum(int n) {
    int sum = 0;
    for (int i = n; i >= 1; i--) {
        sum += i;
    }
    return sum;
}