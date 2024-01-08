#include <stdio.h>

  int main () {
      char str[1001];
      scanf("%s", str);
      
      int x = 0, y = 0;
      for (int i = 0; str[i] != NULL; i++) {
          if (str[i] == 'z') {
              x++;
          } else {
              y++;
          }
      }
      if (2 * x  == y) {
          printf("Yes");
      } else {
          printf("No");
      }
  }