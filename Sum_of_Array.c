#include <bits/stdc++.h>
using namespace std;

int main() {
    int size; cin >> size;
    vector<int> arr (size); int sum = 0;
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << sum;
    return 0;
}