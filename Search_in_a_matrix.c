#include <stdio.h>

  int main () {
      int a,b;
      scanf("%d %d", &a, &b);
      
      int arr[a][b];
      
      for (int i = 0; i < a; i++) {
          for (int j = 0; j < b; j++) {
              scanf("%d", &arr[i][j]);
          }
      }
      
      int El;
      scanf("%d", &El);
      
      int found = 0;
      for (int i = 0; i < a; i++) {
          for (int j = 0; j < b; j++) {
              if (arr[i][j] == El) {
                  found = 1;
              }
          }
      } printf("%d", found);
  }