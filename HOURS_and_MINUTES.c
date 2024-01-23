#include <iostream>

using namespace std;

int main() {
    int Time;
    cin >> Time;
    
    int hours = Time / 60;
    int mins = Time % 60;
    
    cout << hours << " " << "Hour(s)" << " " << mins << " Minute(s)" << endl;
    
}