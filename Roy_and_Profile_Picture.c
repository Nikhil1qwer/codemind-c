#include <stdio.h>

  int main () {
      int L;
      scanf("%d", &L);
      int t;
      scanf("%d", &t);
      while (t > 0) {
          int w, h;
          scanf("%d %d", &w, &h);
          
          if ( w < L || h < L) {
              printf("UPLOAD ANOTHER
");
          } else if (w == h) {
              printf("ACCEPTED
");
          } else {
              printf("CROP IT
");
          }
          t--;
      }
  }