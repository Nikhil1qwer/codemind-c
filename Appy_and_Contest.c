#include <stdio.h>

  int main () {
      int t;
      scanf("%d", &t);
      
    while ( t > 0 ) {
      int n, a, b, k;
      scanf("%d %d %d %d", &n, &a, &b, &k);
      
      int count = 0;
      for (int i = 1; i <= n; i++) {
          if ( i % a == 0 && i % b == 0) {
              continue;
          }
          if (i % a == 0) {
              count++;
          } else if (i % b == 0) {
              count++;
          }
      }
      if (count >= k) {
          printf("Win
");
      } else {
          printf("Lose
");
      }
      t--;
    }
  }