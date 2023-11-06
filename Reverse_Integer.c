#include<stdio.h>

  int main () {
      int n;
      scanf("%d",&n);
      int d, r = 0;
      while( n != 0){
          d = n % 10;
          r = r * 10 + d;
          n /= 10;
      } printf("%d",r);
      
  }