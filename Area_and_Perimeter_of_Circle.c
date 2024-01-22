#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int r;
    cin >> r;
    float pi = 3.14;
    cout << fixed << setprecision(2);
    cout << pi * r * r << endl << 2 * pi * r << endl; 
}