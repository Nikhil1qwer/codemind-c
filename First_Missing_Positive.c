#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        while (arr[i] > 0 && arr[i] <= n && arr[arr[i] - 1] != arr[i]) {
            int temp = arr[i];
            arr[i] = arr[temp - 1];
            arr[temp - 1] = temp;
        }
    }

    int found = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != i + 1) {
            found = i + 1;
            break;
        }
    }

    if (found == 0) {
        found = n + 1;
    }

    printf("%d
", found);
    
}
