#include<stdio.h>

  int main (){
      int n;
      scanf("%d", &n);
      
      for (int i = n; i > 0; i--)
      {
          for (int j = 1; j <= n - i; j++)
          {
              printf(" ");
          }
          for (int k = 0; k < i; k++){
              printf("%c ", '@' + i);
          }
          printf("
");
      }
      
  }