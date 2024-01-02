#include <stdio.h>

  int main () {
      char str[1001];
      scanf("%[^
]", str);
      
      char max = ' ';
      for (int i = 0; str[i] != NULL; i++) {
          max = (max > str[i]) ? max : str[i];
      }
      printf("%c", max);
  }