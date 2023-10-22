#include<stdio.h>

  int main ()
  {
      float x,y;
      scanf("%f %f",&x,&y);
      printf("%.2f",((y-x)*100/x));
      return 0;
  }