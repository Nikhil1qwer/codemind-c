#include <stdio.h>

 int main () {
     int people;
     scanf("%d", &people);
     
     int HandShakes = people * (people - 1) / 2;
     printf("%d", HandShakes);
 }