#include <stdio.h>

  int main () {
      int n;
      scanf("%d", &n);
      
      int arr[n];
      int max = 0;
      
      for (int i = 0; i < n; i++) {
          scanf("%d", &arr[i]);
      }
      
      
    if (n % 2 != 0) {
        for (int i = 0; i < n/2; i++) {
            printf("%d %d ", arr[i], arr[n - 1 - i]);
         }
            printf("%d 0", arr[n/2]);
    } else {
        for (int i = 0; i < n/2; i++) {
            printf("%d %d ", arr[i], arr[n - 1 - i]);
         }
    }

  }