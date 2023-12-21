#include <stdio.h>
#include <limits.h>
#include <string.h>


  int main () {
      int a,b;
      scanf("%d %d", &a, &b);
      
      int arr[a][b];
      int row[a], column[b];
      
      memset(row,0,sizeof(row));
      memset(column, 0, sizeof(column));
      
      for (int i = 0; i < a; i++) {
          for (int j = 0; j < b; j++) {
              scanf("%d", &arr[i][j]);
          }
      }
       for (int i = 0; i < a; i++) {
          for (int j = 0; j < b; j++) {
              row[i] += arr[i][j];
              column[i] += arr[i][j];
          }
      }
      
      int max_row = INT_MIN, max_column = INT_MIN;
      
      for (int i = 0; i < a; i++) {
          max_row = (row[i] > max_row) ? row[i] : max_row; 
      }
      for (int j = 0; j < b; j++) {
          max_column = (column[j] > max_column) ? column[j] : max_column;
      }
      if (max_row > max_column) {
          printf("%d",max_row);
      } else {
          printf("%d",max_column);
      }
  }