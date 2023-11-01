#include<stdio.h>

 int main (){
     int n;
     scanf("%d",&n);
     
     for ( int i = 1; i <= 12; i++) {
         printf("%d x %d = %d
",n,i,n*i);
     }
 }