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
      int a, b;
      scanf("%d %d", &a, &b);
      
      for (int i = a; i <= b; i++) {
          if (prime(i)) {
              printf("%d
", i);
          }
      }
      
  }