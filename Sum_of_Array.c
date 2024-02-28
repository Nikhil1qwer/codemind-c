#include <bits/stdc++.h>
using namespace std;

int main () {
    int size;
    cin >> size;
    
    int sum = 0;
    vector <int> myVector;
    
    for(int i = 0; i < size; i++) {
        int val;
        cin >> val;
        
        myVector.push_back(val);
        sum += myVector[i];
    }
    
    cout << sum << endl;
    return 0;
}
