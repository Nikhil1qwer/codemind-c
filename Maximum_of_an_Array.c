#include <iostream>
#include <vector>

using namespace std;
int MAX(vector<int> vector, int size);

int main() {
    int size;
    cin >> size;
    
    vector <int> vector(size);
    for(int i = 0; i < size; i++) {
        cin >> vector[i];
    }
    
    int max = MAX(vector, size);
    cout << max << endl; 
    
    return 0;
}

int MAX(vector<int> vector, int size) {
    int Max = vector[0];
    for(int i = 0; i < size; i++) {
        Max = (Max > vector[i])? Max : vector[i];
    }
    return Max;
}