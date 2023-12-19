#include <stdio.h>

 int main () {
     int n;
     scanf("%d", &n);
     
     int Arr[n];
     int Even = 0;
     for (int i = 0; i < n; i++){
         scanf("%d", &Arr[i]);
         if (Arr[i] % 2 == 0) {
             Even += Arr[i];
         }
     }
     printf("%d", Even);
 }