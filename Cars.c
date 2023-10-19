#include<stdio.h>
#include<stdlib.h>
  int main () 
  {
      int x;
      scanf("%d",&x);
      
      if (x%4==0)
      printf("%d",x/4);
      else 
      printf("%d",(x/4)+1);
      return 0;
  }