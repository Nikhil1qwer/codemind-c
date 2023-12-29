#include <stdio.h>
#include <string.h>
#include <ctype.h>

  int main () {
      char str[1001];
      scanf("%[^
]", str);
      
      int count = 0;
      for (int i = 0; str[i] != NULL; i++) {
          char lower = tolower(str[i]);
          if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
              count++;
          }
      }
      printf("%d", count);
  }