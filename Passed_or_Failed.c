#include<stdio.h>
 int main () {
     int E,M,P,Che,CS;
     scanf("%d %d %d %d %d",&E,&M,&P,&Che,&CS);
     
     if ( E > 34 && M > 34 && P > 34 && Che > 34 && CS > 34){
         printf("PASSED");
     } else {
         printf("FAILED");
     }
 }