#include<stdio.h>

 int main (){
     int f,l;
     scanf("%d %d",&f,&l);
     int gcd = 0,h;
     h = ( f > l ) ? f : l;
     for ( int i = 1; i <= h; i++){
         if ( f % i == 0 && l % i == 0){
             gcd = i;
         }
     } printf("%d",gcd);
 }