#include <stdio.h>
#include <ctype.h>

  int main () {

        char str[101];
        scanf("%[^
]s", str);
          
        int count = 0;
        for (int i = 0; str[i] != NULL; i++) {
              str[i] = tolower(str[i]);
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'o' || str[i] == 'u') {
                  count++;
              }
          }
          
        
        printf("%d", count);
          
      
  }