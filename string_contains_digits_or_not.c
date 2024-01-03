#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

 int main () {
     int tcases;
     scanf("%d", &tcases);
     
     while (tcases > 0) {
         char str[1001];
         scanf("%s", str);
         
         int flag = false;
         for (int i = 0; str[i] != NULL; i++) {
             if (isdigit(str[i])) {
                 flag = true;
             }
         }
         if (flag) {
             printf("Yes
");
         } else {
             printf("No
");
         }
         
         tcases--;
     }
     
 }