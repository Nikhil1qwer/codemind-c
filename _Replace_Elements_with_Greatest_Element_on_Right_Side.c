#include <stdio.h>

 int main () {
     int n;
     scanf("%d", &n);
     
     int arr[n];
     for (int i = 0; i < n; i++) {
         scanf("%d", &arr[i]);
     }
     for (int i = 0; i < n - 1; i++) {
         int max = 0;
         for (int j = i + 1; j < n; j++) {
             max = (max < arr[j]) ? arr[j] : max;
         }
         printf("%d ", max);
     }
     printf("-1");
 }