#include <stdio.h>

 int main () {
     int l, b, w, cost;
     scanf("%d %d %d %d", &l, &b, &w, &cost);
     
     if (2 * w < l && 2 * w < b) {
         int Fence;
         Fence = ((l * b) - (l - 2 * w) * (b - 2 * w)) * cost;
         printf("%d", Fence);
     } else {
         printf("Impossible");
     }
     
 }