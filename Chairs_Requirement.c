#include<stdio.h>

  int main (){
      int a,b;
      scanf("%d %d",&a,&b);
      int c = ( a > b )? a - b : b - a ;
      printf("%d",c);
  }