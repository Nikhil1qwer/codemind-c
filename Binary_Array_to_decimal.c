#include <stdio.h>
#include <math.h>

  int main () {
      int n;
      scanf("%d", &n);
      
      int arr[n];
      int t = n-1;
      for (int i = 0; i < n; i++) {
          scanf("%d", &arr[i]);
      }
      int decimal = 0;
      
          for (int i = 0; i < n; i++) {
              int base = pow(2, t);
              decimal += arr[i] * base;
              t--;
          }
      printf("%d", decimal);
  }