#include <stdio.h>

 int main () {
     int l, b, w, cost;
     scanf("%d %d %d %d", &l, &b, &w, &cost);
     
     printf("%d", (2 * w * ((l + w) + (b + w))  * cost) );
     
 }