#include<stdio.h>

 int main (){
     int n,e;
     scanf("%d %d ",&n,&e);
     
     for ( int i = 1; i <= e; i++) {
         printf("%d x %d = %d
",n,i,n*i);
     }
 }