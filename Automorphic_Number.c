#include <stdio.h>
#include <math.h>

  int count (int n) {
      int c = 0;
      while (n > 0) {
          n /= 10;
            c++;
      }
      return c;
  }
  
  int main () {
      int n;
      scanf("%d", &n);
      
      int pow_ = pow(n,2);
      int digis = pow(10,count(n));
      
      int last_d = pow_ % digis;
      
      if ( n == last_d ) {
          printf("Automorphic Number");
      } else {
          printf("Not an Automorphic Number");
      }
      
  }