#include<stdio.h> 

int  main () 
 {
     int s;
     scanf("%d",&s);
     
     int h = s / 3600;
     int m = (s % 3600) / 60;
         s = (s % 3600) % 60;
         
         printf("H:M:S-%d:%d:%d",h,m,s);
         return 0;
 }