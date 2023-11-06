#include<stdio.h>

  int main (){
      int n;
      scanf("%d",&n);
      for ( int i = n; i >= 1; i--)
      { 
         for ( int j = 0; j < i; j++)
         {
             printf("%c ",'A'+j);
     } 
     printf("
");
   }
 }