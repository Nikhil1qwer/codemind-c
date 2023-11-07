#include<stdio.h>
  int main () {
      int a,b;
      scanf("%d %d",&a,&b);
      int s1 = 0, s2 = 0;
      for ( int i = 1; i <= a/2; i++){
          if ( a % i == 0){
              s1 += i;
          }
      }
      for ( int j = 1; j <= b/2; j++){
          if ( b % j == 0){
              s2 += j;
          }
      } if ( s1 == b && s2 == a){
          printf("Amicable");
      } else {
          printf("Not Amicable");
      }
  }