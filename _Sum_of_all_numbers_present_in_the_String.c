#include <stdio.h>
#include <ctype.h>

 int main() {
     char str[1001];
     scanf("%[^
]", str);
     
     int sum = 0;
     for (int i = 0; str[i] != NULL; i++) {
         if (isdigit(str[i])) {
             sum += str[i] - '0';
         }
     }
     printf("%d", sum);
 }