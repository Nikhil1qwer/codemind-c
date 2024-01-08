#include <stdio.h>

  int main () {
      int Tcases;
      scanf("%d", &Tcases);
      getchar();
      
      while (Tcases > 0) {
          int n;
          scanf("%d", &n);
          
          char str[n + 1];
          scanf("%s", str);
          getchar();
          
          char found = NULL;
          for (int i = 0; str[i] != NULL; i++) {
              int count = 0;
              for (int j = 0; str[j] != NULL; j++) {
                  if (str[i] == str[j] && i != j) {
                      count++;
                      break;
                  }
              }
              if (count == 0) {
                  found = str[i];
                  break;
              }
          }
          if (found != NULL) {
              printf("%c
", found);
          } else {
              printf("-1
");
          }
          Tcases--;
      }
      
  }