#include <stdio.h>

  int main () {
      int n;
      scanf("%d", &n);
      
      int arr[n];
      for (int i = 0; i < n; i++) {
          scanf("%d", &arr[i]);
      }
      
      int K;
      scanf("%d", &K);
      int found = 1;
      for (int i = 0; i < n; i++) {
          int count = 0;
          for (int j = 0; j < n; j++) {
              if (arr[i] == arr[j]) {
                  count++;
              }
          }
          if (count == K) {
              printf("%d ",arr[i]);
              arr[i] = 0;
              found = 0;
          }
      }
      if (found) {
          printf("-1");
      }
  }