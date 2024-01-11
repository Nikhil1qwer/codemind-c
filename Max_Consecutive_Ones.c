#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int consecutive = 0, count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            consecutive = (count > consecutive) ? count : consecutive;
            count = 0;
        } else {
            count++;
        }
    }
    consecutive = (count > consecutive) ? count : consecutive;
    printf("%d", consecutive);
}