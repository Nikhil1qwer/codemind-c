#include <stdio.h>

 int LCM (int a, int b) {
     int max = (a > b) ? a : b;
     int min = (a < b) ? a : b;
     
     int i = max;
     
     while(1) {
         if (i % min == 0 && i % max == 0) {
             return i;
         }
         i += max;
     }
     
 }

 int bumblebee (int arr[], int n) {
     int rizz = arr[0];
     for (int i = 0; i < n; i++) {
         rizz = LCM(rizz, arr[i]);
     }
     return rizz;
 }

  int main () {
      int n;
      scanf("%d", &n);
      
      int arr[n];
      for (int i = 0; i < n; i++) {
          scanf("%d", &arr[i]);
      }
      printf("%d", bumblebee(arr,n));
  }