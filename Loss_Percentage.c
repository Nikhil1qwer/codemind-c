#include<stdio.h>

  int main ()
  {
      float x,y;
      scanf("%f %f",&x,&y);
      
      printf("%.2f",(x-y)*100/x);
      return 0;
      
  }