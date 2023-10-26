#include<stdio.h>
  int main ()
  {
      int a,b;
      scanf("%d %d",&a,&b);
      
      int d = (a>b)? a - b : b - a;
  
      printf("%d",d);
  }