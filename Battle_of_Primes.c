#include <stdio.h>
#include <math.h>

 int NextPrime (int n) {
     for (int i = 2; i <= sqrt(n); i++) {
         if (n % i == 0) {
             return 0;
         }
     }
     return 1;
 }
  int main () {
      int n1, n2;
      scanf("%d %d", &n1, &n2);
      
      int N = n1 + n2 + 1;
      int Prime = 0;
      
      while (1) {
          if (NextPrime(N)) {
              Prime = N;
              break;
          } else {
              N++;
          }
      }
      printf("%d", Prime - (n1 + n2));
  }