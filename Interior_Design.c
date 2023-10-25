#include<stdio.h>

  int main () {
      int x1,y1,x2,y2;
      scanf("%d %d %d %d", &x1,&y1,&x2,&y2);
      
      if( x1+y1 <= x2+y2){
          printf("%d",x1+y1);
      } else {
          printf("%d",x2+y2);
      }
  }