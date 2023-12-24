#include <stdio.h>

 int main () {
     int nik[3], nikky[3];
     for (int i = 0; i < 3; i++) {
         scanf("%d", &nik[i]);
     }
     for (int i = 0; i < 3; i++) {
         scanf("%d", &nikky[i]);
     }
     
     int Alice = 0, Bob = 0;
     
     for (int i = 0; i < 3; i++) {
         if (nik[i] == nikky[i]) {
             continue;
         } else if (nik[i] > nikky[i]) {
             Alice ++;
         } else {
             Bob ++;
         }
     }
     printf("%d %d", Alice, Bob);
 }