#include<stdio.h>
  
  int main () {
      int f,l;
      scanf("%d %d",&f,&l);
      int count =0;
      for ( int i = f; i<= l; i++){
          if ( i % 3 == 0){
              count++;
          }
      }
      printf("%d",count);
  }