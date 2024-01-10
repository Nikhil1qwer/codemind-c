#include <stdio.h>

  int main () {
      int N, X;
      scanf("%d %d", &N, &X);
      
      if (X * (X + 1) / 2 > N) {
          printf("NO");
      } else {
          printf("YES");
      }
      
  }