#include<stdio.h>

  int main (){
      int n;
      scanf("%d",&n);
      int f = 1,t;
      while ( n != 0){
          f *= n ;
          n = n-1;
      } printf("%d",f);
      
  }