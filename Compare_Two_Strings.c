#include <stdio.h>
#include <string.h>

  int main () {
      char str1[1001];
      scanf("%s", str1);
      char str2[1001];
      scanf("%s", str2);
      
      if (strcmp(str1, str2) == 0) {
          printf("Strings are Equal");
      } else {
          printf("Strings are not Equal");
      }
      
  }