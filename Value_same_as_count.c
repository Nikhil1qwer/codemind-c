#include <bits/stdc++.h>
using namespace std;

int value_as_count(vector<int>& vector) {
    int size = vector.size();
    
    int same_as_count = 0;
    for(int i = 0; i < size; i++) {
        int occ = 0;
        for(int j = 0; j < size; j++) {
            if(vector[i] == vector[j]) {
                occ++;
            }
        }
        if(occ == vector[i]) {
            vector[i] = 0;
            same_as_count++;
        }
    }
    
    return same_as_count;
}

int main() {
    int size; 
    cin >> size;
    
    vector<int> vector(size);
    for(int i = 0; i < size; i++) {
        cin >> vector[i];
    }
    
    int count = value_as_count(vector);
    
    cout << count;
    return 0;
}