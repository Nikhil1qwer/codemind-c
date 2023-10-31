#include<stdio.h>
  int main () {
      int n;
      scanf("%d",&n);
      int t,sum = 0;
      while ( n != 0){
          t = n % 10;
          sum += t;
          n /= 10;
      }
      printf("%d",sum);
  }