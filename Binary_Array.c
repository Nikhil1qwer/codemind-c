#include <stdio.h>

  int main () {
      int n;
      scanf("%d", &n);
      
      int binary[n];
      int bits = 1;
      for (int i = 0; i < n; i++) {
          scanf("%d", &binary[i]);
          if (binary[i] == 0 || binary[i] == 1) {
              continue;
          } else {
              bits = 0;
              break;
          }
      }
      if(bits) {
          printf("True");
      } else {
          printf("False");
      }
  }