#include<stdio.h>

  int main () {
      int n;
      scanf("%d",&n);
      int f;
      f = n % 10 ;
      while ( n >= 9 ){
          n /= 10;
      }
      printf("%d",f+n);
  }