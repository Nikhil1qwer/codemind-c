#include <stdio.h>
#include <limits.h>

  int main () {
      int n;
      scanf("%d", &n);
      
      int arr[n];
      int max = INT_MIN;
      
      for (int i = 0; i < n; i++){
          scanf("%d", &arr[i]);
          max = (max < arr[i]) ? arr[i] : max;
      }
      int extra;
      scanf("%d", &extra);
      
      for (int i = 0; i < n; i++){
          if ( (arr[i] + extra) >= max ) {
              printf("True ");
          } else {
              printf("False ");
          }
      }
      
  }