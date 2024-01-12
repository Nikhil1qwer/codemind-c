#include <stdio.h>

 int main () {
     int n;
     scanf("%d", &n);
     
     int arr[n];
     for (int i = 0; i < n; i++) {
         scanf("%d", &arr[i]);
     }
     for (int i = 0; i < n - 1; i++) {
         int max = arr[i + 1];
         for (int j = i + 1; j < n; j++) {
             for (int k = j + 1; k < n; k++) {
                 max = (max > arr[k]) ? max : arr[k];
             }
         }
         printf("%d ", max);
     }
     printf("-1");
 }