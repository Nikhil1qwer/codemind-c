#include <stdio.h>
#include <string.h>

 int main () {
     int n1;
     scanf("%d", &n1);
     
     int strt[n1];
     for (int i = 0; i < n1; i++) {
         scanf("%d", &strt[i]);
     }
     
     int n2;
     scanf("%d", &n2);
     
     int end[n2];
     for (int i = 0; i < n2; i++) {
         scanf("%d", &end[i]);
     }
     
     int Time;
     scanf("%d", &Time);
     
     int count = 0;
     for (int i = 0; i < n1; i++) {
         if (Time >= strt[i] && Time <= end[i]) {
             count++;
         }
     }
     
     printf("%d", count);
     
 }