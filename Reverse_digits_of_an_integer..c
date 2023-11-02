#include<stdio.h>

  int main () {
      int n;
      scanf("%d",&n);
      int t,r = 0;
      
      while ( n != 0){
          t = n % 10;
          r = r*10 + t;
          n /= 10;
      }
      printf("%d",r);
  }