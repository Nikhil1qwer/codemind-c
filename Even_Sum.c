#include <stdio.h>

  int main () {
      int n;
      scanf("%d", &n);
      
      int arr[n];
      int Even_Sum = 0;
      
      for (int i = 0; i < n; i++) {
          scanf("%d", &arr[i]);
          if (arr[i] % 2 == 0) {
              Even_Sum += arr[i];
          }
      }
      printf("%d", Even_Sum);
  }