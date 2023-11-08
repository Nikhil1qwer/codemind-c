#include<stdio.h>

  int main () {
      int n;
      scanf("%d",&n);
      int d, l = 0;
      while ( n != 0){
          d = n % 10;
          l = ( d > l) ? d : l;
          n /= 10;
      } printf("%d",l);
  }