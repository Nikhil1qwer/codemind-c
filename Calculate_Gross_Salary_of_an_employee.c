#include<stdio.h> 


   int main () {
       float salary,hra,da;
       scanf("%f %f %f" ,&salary ,&hra ,&da);
       printf("%.2f
%.2f",0.12 * salary , salary + hra + da + (0.12*salary));
       return 0;
   }