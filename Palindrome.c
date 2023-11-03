#include<stdio.h>

  int main () {
      int n;
      scanf("%d",&n);
      int t,temp = n, r = 0;
      while ( temp != 0){
           t = temp % 10;
           r = r * 10 + t;
           temp /= 10;
      } if ( r == n ){
          printf("Palindrome");
      } else {
          printf("Not Palindrome");
      }
  }