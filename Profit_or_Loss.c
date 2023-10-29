#include<stdio.h>
  int main () {
      int c,s;
      scanf("%d %d",&c,&s);
      
      if ( c > s){
          printf("Loss");
      } else if ( c < s ){
          printf("Profit");
      } else {
          printf("No Profit and No Loss");
      }
  }