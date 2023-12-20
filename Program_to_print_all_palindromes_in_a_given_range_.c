#include <stdio.h>

 int isPalindrome(int n) {
     int reverse = 0, temp = n;
     while (n > 0) {
         reverse = reverse * 10 + n % 10;
         n /= 10;
     }
     if (temp == reverse) {
         return 1;
     }
     return 0;
 }
  int main () {
      int a,b;
      scanf("%d %d", &a, &b);
      for (int i = a; i <= b; i++) {
          if (isPalindrome(i)){
              printf("%d ", i);
          }
      }
  }