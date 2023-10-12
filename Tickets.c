#include<stdio.h> 

  int main () 
  {
      int x;
      scanf("%d", &x);
      int  R = 4 * x;
      if ( R <= 1000){
          printf("YES");
      } else {
          printf("NO");
      }
  }