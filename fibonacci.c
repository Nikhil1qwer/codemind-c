#include<stdio.h>

  int main () {
      int n;
      scanf("%d",&n);
      int a,b,c,count =0;
      a = 0;
      b = 1;
      c = 0;
      for ( int i = 1; i <= n; i++ ){
          printf("%d ",c);
          a = b;
          b = c;
          c = a + c;
         
      }
  }