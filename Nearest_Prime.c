#include <stdio.h>
#include <math.h>

 int prime (int n) {
     if (n <= 1) {
         return 0;
     }
     
     if (n <= 3) {
         return 1;
     }
     
     if (n % 2 == 0 || n % 3 == 0) {
         return 0;
     }
     
     for (int i = 2; i <= sqrt(n); i++) {
         if (n % i == 0) {
             return 0;
         }
     }
     return 1;
 } 
 
  int main() {
      int t;
      scanf("%d", &t);
      
      while (t > 0) {
          int n;
          scanf("%d", &n);
          
          int np = n;
          int pp = n;
          
          while (1) {
              if (prime(np)) {
                  break;
              } else {
                  np++;
              }
          }
          while (1) {
              if (prime(pp)) {
                  break;
              } else {
                  pp--;
              }
          }
          if (np - n < n - pp) {
              printf("%d
", np);
          } else {
              printf("%d
", pp);
          }
          t--;
      }
      
  }