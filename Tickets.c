#include<stdio.h>

   int main () {
       int x;
       scanf("%d",&x);
       
       int r = 4 * x;
       
       if ( r <= 1000 ){
           printf("YES");
       } else {
           printf("NO");
       }
       
       return 0;
   }