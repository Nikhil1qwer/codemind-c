#include<stdio.h> 

 int main () {
     int x, y, z;
     scanf("%d %d %d", &x, &y, &z);
     
     if (x > y + z) {
         printf("Gryffindor");
     } else if (y > x + z) {
         printf("Slytherin");
     } else if (z > x + y) {
         printf("Hufflepuff");
     } else {
         printf("NOTA");
     }
     
 }
