#include <stdio.h>

  int main () {
      int a,b;
      scanf("%d %d", &a, &b);
      
      int arr[a][b];
      int even = 0, odd = 0;
      
      for (int i = 0; i < a; i++) {
          for (int j = 0; j < b; j++) {
              scanf("%d", &arr[i][j]);
              if (arr[i][j] % 2 == 0) {
                  even += arr[i][j];
              } else {
                  odd += arr[i][j];
              }
          }
      } printf("%d %d", even, odd);
  }