#include <stdio.h>

 int main () {
     int n, max;
     scanf("%d %d", &n, &max);
     
     int arr[n];
     for (int i = 0; i < n; i++) {
         scanf("%d", &arr[i]);
     }
     int count = 0, Count = 0;
     for (int i = 0; i < n; i++) {
         if (max < arr[i]) {
             count++;
             if (count == 2) {
                 break;
             }
         } else {
             Count++;
         }
     }
    printf("%d", Count);
 }