#include<stdio.h>

  int main () {
      int n;
      scanf("%d",&n);
      int a = 0, b = 1, c = 0;
      while ( b < n ){
          c = a + b;
          a = b;
          b = c;
      } if ( b == n){
          printf("True");
      } else {
          printf("False");
      }
      
  }