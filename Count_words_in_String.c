#include <stdio.h>

  int main () {
      char str[1001];
      scanf("%[^
]", str);
      
      int count = 1;
      for (int i = 0; str[i] != 0; i++) {
          if (str[i] == ' ') {
              count++;
          }
      }
      printf("%d", count);
  }