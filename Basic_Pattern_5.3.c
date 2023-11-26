#include<stdio.h>

 int main (){
     int n;
     scanf("%d",&n);
     
     for ( int i = n; i >= 1; i--){
         for ( int k = 1; k <= i; k++){
             printf("%d",i);
         }
         for ( int j = 1; j <= n - i; j++){
            printf("*");
         }       printf("
");
     }
     
 }