#include <stdio.h>
#include <ctype.h>

  int main () {
      int T;
      scanf("%d", &T);
      
      while (T > 0) {
      char str[101];
      scanf("%s", str);
      
      int flag = 1;
      for (int i = 0; str[i] != NULL; i++) {
          if (str[i] >= '0' && str[i] <= '9') {
              flag = 0;
          }
      }
      if (flag) {
          printf("No
");
      } else {
          printf("Yes
");
      }
      T--;
      }
      
  }