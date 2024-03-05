#include <bits/stdc++.h>

using namespace std;

int main() {
    int size;
    cin >> size;
    
    vector <int> vec(size);
    for(int i = 0; i < size; i++) {
        cin >> vec[i];
    }
    
    int is_super = 0, sum = 0;
    for(int i = 0; i < size; i++) {
        int occ = count(vec.begin(), vec.end(), vec[i]);
        if(occ == vec[i]) {
            is_super++;
            sum += vec[i];
            vec[i] = 0;
        }
    }
    
    if(is_super) {
        float avg = static_cast <float> (sum) / is_super;
        cout << fixed << setprecision(2) << avg;
    } else {
        cout << -1;
    }
    
    return 0;
}