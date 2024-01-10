#include <stdio.h>

  int main() {
      int n;
      scanf("%d", &n);
      
      int arr[n];
      for (int i = 0; i < n; i++) {
          scanf("%d", &arr[i]);
      }
      
      int found = 0;
      for (int i = 1; i < n - 1; i++) {
          if ( (arr[i - 1] % 2 == 0 && arr[i + 1] % 2 != 0) || (arr[i - 1] % 2 != 0 && arr[i + 1] % 2 == 0) ) {
              found++;
          }
      }
      if ( (arr[1] % 2 == 0 && arr[n - 1] % 2 != 0) || (arr[1] % 2 != 0 && arr[n - 1] % 2 == 0) ) {
          found++;
      }
      if ( (arr[0] % 2 == 0 && arr[n - 2] % 2 != 0) || (arr[0] % 2 != 0 && arr[n - 2] % 2 == 0) ) {
          found++;
      }
      printf("%d", found);
  }