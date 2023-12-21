#include <stdio.h>

 int count_me(int n) {
     int c = 0;
     while (n > 0) {
         n /= 10;
         c++;
     }
     return c;
 }
 
 int main () {
     int n;
     scanf("%d", &n);
     int s = count_me(n);
     
     int arr[s];
     int t = count_me(n);
     
     while (n > 0) {
         arr[--s] = n % 10;
         n /= 10;
     } 
     
     int found = 0;
     for (int i = 0; i < t; i++) {
         int count = 0;
         for (int j = 0; j < t; j++) {
             if (arr[i] == arr[j]) {
                 count++;
             }
         }
         if (count >= 2) {
             found = 1;
             break;
         }
     }
     if (found == 0) {
         printf("Unique Number");
     } else {
         printf("Not Unique Number");
     }
 }