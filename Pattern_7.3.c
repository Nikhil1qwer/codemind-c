#include <stdio.h>

  int main () {
      int n;
      scanf("%d", &n);
      
      for (int i = n; i > 0; i--){
          for (int j = 0; j < n - i; j++){
              printf(" ");
          }
          for (int k = i; k > 0; k--){
              printf("%d ",k);
          }   printf("
");
      }
      
  }