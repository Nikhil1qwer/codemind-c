#include <stdio.h>

  int main () {
      char nums[1001];
      scanf("%s", nums);
      
      for (int i = 0; nums[i] != NULL; i++) {
          int num = nums[i] - '0';
          if ( num % 2 == 0 ) {
              continue;
          } else {
              printf("%d", num * num);
          }
      }
      
  }