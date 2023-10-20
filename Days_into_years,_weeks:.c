#include<stdio.h>

  int main ()
  {
      int d;
      scanf("%d",&d);
      
      int y = d / 365;
      int w = (d % 365)/7;
      
      printf("%d
%d",y,w);
      return 0;
  }