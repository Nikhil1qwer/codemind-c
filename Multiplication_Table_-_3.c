#include<stdio.h>

 int main (){
     int n,s,e;
     scanf("%d %d %d",&n,&s,&e);
     
     for ( int i = s; i <= e; i++) {
         printf("%d x %d = %d
",n,i,n*i);
     }
 }