#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int *arr = (int *) malloc (n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int count = 0;
    for(int i = 0; i < n; i++) {
        int val = 0;
        for (int j = 0; j < n; j++) {
            if(arr[i] == arr[j]) {
                val++;
            }
        }
        if (val == arr[i]) {
            arr[i] = 0;
            count++;
        }
    }
    
    printf("%d", count);
    
    free(arr);
    return 0;
}