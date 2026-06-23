#include <stdio.h>
int main() {
  int n = 5, i, j, sum = 0;
  int matrix[5][5] = {{1, 2, 3, 4, 5},
                      {6, 7, 8, 9, 10},
                      {11, 12, 13, 14, 15},
                      {16, 17, 18, 19, 20},
                      {21, 22, 23, 24, 25}};
  printf("Row totals : ");
  for (i = 0; i < n; i++) {
    sum = 0;
    for (j = 0; j < n; j++) {
      sum += matrix[i][j];
    }
    printf("%d \t", sum);
  }
  printf("\ncolumn totals : ");
  for (i = 0; i < n; i++) {
    sum = 0;
    for (j = 0; j < n; j++) {
      sum += matrix[j][i];
    }
    printf("%d \t", sum);
  }

  return 0;
}