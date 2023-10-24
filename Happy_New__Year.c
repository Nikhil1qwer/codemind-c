#include<stdio.h>

  int main ()  {
      
      int h,m;
      scanf("%d %d", &h ,&m);
      
       printf("%d", (86400 - ( h * 3600 + m * 60 ))/60) ;  
  }