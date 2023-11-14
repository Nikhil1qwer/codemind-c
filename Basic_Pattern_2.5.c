#include<stdio.h>

  int main () {
      int n;
      scanf("%d", &n);
      
      for ( int i = n; i >= 1; i--){
          for ( int j = i; j <= n; j++){
              printf("%c ", 64 + i);
          }   printf("
");
      }
      
  }