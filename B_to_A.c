#include<stdio.h>

  int main () {
      int s,e;
      scanf("%d %d",&s,&e);
      
      while ( e >= s){
          printf("%d ",e);
          e--;
      }
      
  }