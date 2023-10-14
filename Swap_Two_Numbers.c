#include<stdio.h> 

  int main () {
      int x,y;
      scanf("%d %d" ,&x ,&y);
      
      int t = x;
          x = y;
          y = t;
      printf("%d
%d",x,y);
      return 0;
  }