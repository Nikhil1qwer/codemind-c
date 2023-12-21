#include <stdio.h>

  int fact_sum (int n) {
      int sum = 0;
      while (n > 0) {
          int product = 1;
          int d = n % 10;
          while (d > 0) {
              product *= d;
              d--;
          }
          sum += product;
          n /= 10;
      }
      return sum;
  }
    int main () {
        int T;
        scanf("%d", &T);
        
        while (T > 0) {
            int n;
            scanf("%d", &n);
            if (fact_sum(n) == n) {
                printf("Strong
");
            } else {
                printf("Not Strong
");
            }
            T--;
        }
        
    }