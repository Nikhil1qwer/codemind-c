#include<stdio.h>

  int main (){
      int f,l;
      scanf("%d %d",&f,&l);
      int c,s,d;
      
      for ( int i = f; i <= l; i++){
          c = 0;
          s = 0;
          d = 0;
          int t = i;
          while ( t != 0){
              d = t % 10;
              t /= 10;
              c++;
              if ( d == 0){
                  break;
              } else {
                  if ( i % d == 0){
                      s++;
                  }
              }
          } if ( c == s ){
                printf("%d ",i);
        }
     }
  }