#include <stdio.h>
#include <ctype.h>

  int main () {
      char str[1001];
      scanf("%[^
]", str);
      
      int Element_Count = 0;
      for (int i = 0; str[i] != NULL; i++) {
          Element_Count++;
      }
      printf("%d", Element_Count);
  }