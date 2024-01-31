#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, max;
    cin >> n >> max;
    
    vector<int> arr(n); // dynamic --> int *arr = new int[n]
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    
    int count = 0, maxCount = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            count++;
            if (count == 2) {
                break;
            }
        } else {
            maxCount++;
        }
    }
    cout << maxCount;
}