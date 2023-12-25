#include <stdio.h>

  int main () {
      char str[101];
      scanf("%[^
]s", str);
      
      int max = str[0];
      for (int i = 0; str[i] != NULL; i++) {
          max = (max < str[i]) ? str[i] : max;
      }
      printf("%c", max);
  }