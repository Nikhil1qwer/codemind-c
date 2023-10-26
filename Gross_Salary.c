#include<stdio.h>

  int main ()
  {
      float s;
      scanf("%f",&s);
      float da , hra ;
      if ( s <= 10000 )
      {
          da = s * 0.8;
          hra = s * 0.2;
      } else if (s <= 20000 ) {
          da = s * 0.9 ;
          hra = s * 0.25;
      } else if (s > 20000) {
          da = s * 0.95;
          hra = s * 0.30;
      } 
      
      float gs= s + da + hra;
      printf("%.2f",gs);
  }