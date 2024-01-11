#include <stdio.h>
#include <stdlib.h>

  int main () {
      int Tcases;
      scanf("%d", &Tcases);
      
      while (Tcases > 0) {
          int n;
          scanf("%d", &n);
          
          int arr[n], sum = 0;
          for (int i = 0; i < n - 1; i++) {
              scanf("%d", &arr[i]);
              sum += arr[i];
          }
          
          int N_naturals = n * (n + 1) / 2;
          int Missing = abs(N_naturals - sum);
          
          printf("%d
", Missing);
          Tcases--;
      }
      
  }