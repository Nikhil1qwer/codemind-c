#include <bits/stdc++.h>
using namespace std;

int main() {
    int size; cin >> size;
    vector<int> vec(size);
    for(int i = 0; i < size; i++) {
        cin >> vec[i];
    }
    int maxi = vec[0];
    for(int i: vec) {
        maxi = max(maxi, i);
    }
    
    cout << maxi;
    return 0;
}