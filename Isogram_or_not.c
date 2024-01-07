#include <stdio.h>
#include <ctype.h>

  int main () {
      char str[1001];
      scanf("%[^
]", str);
      
      char alpha[26] = {0};
      
      for (int i = 0; str[i] != NULL; i++) {
          if (isalpha(str[i])) {
              int digit = tolower(str[i]) - 96;
              alpha[digit]++;
          }
      }
      
      int flag = 1;
      for (int i = 0; i < 27; i++) {
          if (alpha[i] > 1) {
              flag = 0;
              break;
          }
      }
      if (flag) {
          printf("True");
      } else {
          printf("False");
      }
  }