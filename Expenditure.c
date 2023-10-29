#include<stdio.h>
  int main () {
      int x,y;
      scanf("%d %d",&x,&y);
      
      if ( y * 30 > x ){
          printf("NO");
      } else {
          printf("YES");
      }
  }