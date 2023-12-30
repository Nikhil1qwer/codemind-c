#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

  int main () {
      int T;
      scanf("%d", &T);
      getchar();
      
      while(T > 0) {
      char Digimon[101];
      scanf("%[^
]", Digimon);
      getchar();
      
      int flag = false;
      for (int i = 0; Digimon[i] != NULL; i++) {
          if (isdigit(Digimon[i])) {
              flag = true;
          }
      }
      if (flag == true) {
          printf("Yes
");
      } else {
          printf("No
");
      }
      T--;
    }
      
  }