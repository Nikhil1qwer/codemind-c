#include<stdio.h>

  int main () {
      float b1,b2,h;
      scanf("%f %f %f" ,&b1 ,&b2 ,&h);
      printf("%.4f",(b1+b2) * h / 2);
      return 0;
  }