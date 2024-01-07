#include <stdio.h>
#include <string.h>

 int main () {
     char str[1001];
     scanf("%[^
]", str);
     getchar();
     char occ;
     scanf("%c", &occ);
     
     int count = 0;
     for (int i = 0; str[i] != NULL; i++) {
         if (str[i] == occ) {
             count++;
         }
     }
     
     if (count != 0) {
         printf("%d", count);
     } else {
         printf("-1");
     }
 }