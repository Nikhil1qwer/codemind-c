#include<stdio.h> 

  int main () {
    int x;
    scanf("%d" ,&x);
    
    int h = x/60;
    int m = x%60;
    
    printf("%d Hour(s) %d Minute(s)" , h ,m);
    return 0;
  }
  