#include<stdio.h>

  int main () {
      int n;
      scanf("%d",&n);
      int d, sum = 0, pro = 1;
      while ( n != 0){
          d = n % 10;
          sum += d;
          pro *= d;
          n /= 10;
      } if( sum == pro){
          printf("Spy Number");
      } else {
          printf("Not Spy Number");
      }
      
  }