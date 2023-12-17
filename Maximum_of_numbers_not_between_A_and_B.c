#include <stdio.h>

  int main () {
      int n;
      scanf("%d", &n);
      
      int arr[n];
      int max = 0;
      
      for (int i = 0; i < n; i++) {
          scanf("%d", &arr[i]);
      }
      
      int A,B;
      scanf("%d %d", &A, &B);
      
    for (int i = 0; i < n; i++) {
        if (A > arr[i] || B < arr[i]) {
            if (max == 0 || max < arr[i]) {
                max = arr[i];
            }
        }
    }  
      if (max) {
          printf("%d", max);
      } else {
          printf("-1");
      }
  }