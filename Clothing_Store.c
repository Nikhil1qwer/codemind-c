#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    int size;
    cin >> size;
    
    unordered_map<int, int> map;
    
    for(int i = 0; i < size; i++) {
        int pair;
        cin >> pair;
        map[pair]++;
    }
    
    int result = 0;
    for(auto& key: map) {
        while(key.second >= 2) {
            result++;
            key.second -= 2;
        }
    }
    
    cout << result << endl;
    return 0;
}