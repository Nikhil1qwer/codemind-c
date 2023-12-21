#include <stdio.h>

  void product (int n) {
      int p = 1, s = 0;
      while (n > 0) {
          int d = n % 10;
          s += d;
          p = p * d;
          n /= 10;
      }
     printf("%d", p - s);
  }
  
   int main () {
       int n;
       scanf("%d", &n);
       product(n);
   }