#include <iostream>

using namespace std;

int main() {
    int Time;
    cin >> Time;
    
    int hrs = Time / 3600;
    int min = (Time % 3600) / 60;
    int sec = (Time % 3600) % 60;
    
    cout << "H:M:S-" << hrs << ":" << min << ":" << sec << endl;
    
}