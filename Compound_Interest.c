#include<stdio.h> 
#include<math.h>

int  main () 
 {
     float p,r,t;
     scanf("%f %f %f", &p, &r ,&t);
     
     printf("%.2f", p * ( pow (1 + r / 100,t)) - p);
     return 0;
 }