#include <stdio.h>

  int main () {
      int n;
      scanf("%d", &n);
      
      int arr[n];
      int sum = 0;
      
      for (int i = 0; i < n; i++) {
          scanf("%d", &arr[i]);
      }
      int A,B;
      scanf("%d %d", &A, &B);
      
    for (int i = 0; i < n; i++) {
        if (A > arr[i] || B < arr[i]) {
            sum += arr[i];
        }
    }  
      printf("%d", sum);
  }