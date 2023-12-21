#include <stdio.h>
#include <math.h>

  int prime (int n) {
      if (n < 2) {
          return 0;
      }
      if (n < 4) {
          return 1;
      }
      for (int i = 2; i <= sqrt(n); i++) {
          if( n % i == 0) {
              return 0;
          }
      }
      return 1;
  }
  
  int palindrome (int n) {
      int rev = 0, t = n;
      while (n > 0) {
          rev = rev * 10 + n % 10;
          n /= 10;
      }
      return (rev == t);
  }
  
   int main () {
       int n;
       scanf("%d", &n);
       n = n + 1;
       while (1) {
           if (palindrome(n) && prime (n)) {
               printf("%d", n);
               break;
           } else {
               n++;
           }
       }
       
   }