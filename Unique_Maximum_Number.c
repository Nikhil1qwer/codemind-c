#include <stdio.h>

 int main () {
     int n;
     scanf("%d", &n);
     
     int num[n];
     for (int i = 0; i < n; i++) {
         scanf("%d", &num[i]);
     }
     
     int found = 0;
     for (int i = 0; i < n; i++) {
         int flag = -1;
         for (int j = 0; j < n; j++) {
             if (num[i] == num[j]) {
                 flag++;
             }
         }
         if (flag == 0) {
             if (found == 0 || found < num[i]) {
                 found = num[i];
             }
         }
     }
     if (found) {
         printf("%d", found);
     } else {
         printf("-1");
     }
 }