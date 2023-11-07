#include<stdio.h>
 
  int main () {
      int n;
      scanf("%d",&n);
      int s = n*n,d,sum = 0;
      while ( s != 0){
          d = s % 10;
          sum += d;
          s /= 10;
      } 
      if ( sum == n){
          printf("Neon Number");
      } else {
          printf("Not Neon Number");
      }
  }