#include<stdio.h>

  int main () {
      int n;
      scanf("%d",&n);
      int t = n,d, P = 0;
      while ( n != 0){
          d = n % 10;
          P = P*10 + d;
          n /= 10;
      }
      if ( t == P){
          printf("True");
      } else {
          printf("False");
      }
      
  }