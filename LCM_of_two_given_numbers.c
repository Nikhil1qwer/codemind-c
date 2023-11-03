#include<stdio.h>

  int main () {
      int f,l;
      scanf("%d %d",&f,&l);
      int max = ( f > l ) ? f : l;
      
      while (1){
          if ( max % f == 0 && max % l == 0){
              printf("%d",max);
              break;
          } max++;
      }
  }