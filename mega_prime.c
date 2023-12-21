#include <stdio.h>
#include <math.h>

 int Prime (int n) {
     if (n == 1) {
         return 0;
     }
     for (int i = 2; i <= sqrt(n); i++) {
         if (n % i == 0) {
             return 0;
         }
     }
     return 1;
 }
  int main () {
      int n;
      scanf("%d", &n);
      
      if (Prime(n) == 0) {
          printf("Not Mega Prime");
      } else {
          if (Prime(n)) {
              int found = 1;
              while (n > 0) {
                  int p = n % 10;
                  if (Prime(p) == 0) {
                      found = 0;
                      break;
                  }
                  n /= 10;
              }
              if (found) {
              	printf("Mega Prime");
			  } else {
			      printf("Not Mega Prime");
			  }
          }
      }
  }