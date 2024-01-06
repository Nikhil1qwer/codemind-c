#include <stdio.h>

  int main () {
      int n;
      scanf("%d", &n);
      
      int arr[n], Sum = 0;
      for (int i = 0; i < n; i++) {
          scanf("%d", &arr[i]);
          if (i % 2 == 0) {
              Sum += arr[i];
          }
      }
      
      printf("%d", Sum);
      
  }