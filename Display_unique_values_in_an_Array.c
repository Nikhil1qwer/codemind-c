#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int *arr = (int *) malloc (n * sizeof(n));
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int Unique = 0;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j] && i != j) {
                count++;
            }
        }
        if (count == 0) {
            printf("%d ", arr[i]);
            Unique++;
        }
    }
    
    if (Unique == 0) {
        printf("-1");
    }
    
    free(arr);
    return 0;
}