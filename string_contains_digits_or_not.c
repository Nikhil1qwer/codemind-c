#include <stdio.h>
#include <ctype.h>

  int main () {
      int tcase;
      scanf("%d", &tcase);
      
      while (tcase > 0) {
          char str[1001];
          scanf("%s", str);
          
          int flag = 0;
          for (int i = 0; str[i] != NULL; i++) {
              if (isdigit(str[i])) {
                  flag = 1;
              }
          }
          if (flag) {
              printf("Yes
");
          } else {
              printf("No
");
          }
          tcase--;
      }
      
  }