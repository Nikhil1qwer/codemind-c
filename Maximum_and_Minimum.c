#include <stdio.h>
#include <string.h>

  int main () {
      int n;
      scanf("%d", &n);
      
      int arr[n];
      int count, min = 0, max = 0;
      
      for (int i = 0; i < n; i++) {
          scanf("%d", &arr[i]);
      }
      
      for (int i = 0; i < n/2; i++) {
          count = 0;
          for (int j = 0; j < n; j++) {
              if (arr[i] == arr[j]) {
                  count++;
              }
          }
          if (count == arr[i]) {
              if ( min == 0 || arr[i] < min ) {
                  min = arr[i];
              }
              if ( max == 0 || arr[i] > max ) {
                  max = arr[i];
              }
          }
      }
      if (min == 0 && max == 0) {
          printf("-1");
      } else {
          printf("%d %d",min,max);
      }
  }