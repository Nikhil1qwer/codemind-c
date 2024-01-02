#include <stdio.h>
#include <ctype.h>

  int main () {
      char str[1001];
      scanf("%s", str);
      
      for (int i = 0; str[i] != NULL; i++) {
          str[i] = tolower(str[i]);
      }
      printf("%s", str);
  }