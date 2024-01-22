#include <iostream>
#include <iomanip>

using namespace std;
#define pi 3.14

int main() {
    int r;
    cin >> r;
    cout << fixed << setprecision(2);
    cout << pi * r * r << endl << 2 * pi * r << endl;
}