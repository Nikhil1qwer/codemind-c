#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int t;
    t = a;
    a = b;
    b = t;
    cout << a << endl << b << endl; 
}