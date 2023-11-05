#include<stdio.h>

 int main () {
     int n;
     scanf("%d",&n);
     float s = 0;
     for ( int i = 1; i <= n; i++){
         s += (float) 1.0 / i;
     } printf("%.2f",s);
     
 }