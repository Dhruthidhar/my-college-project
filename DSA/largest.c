#include <stdio.h>

int main() {
  int n = 5, i, j;
  int matrix[5][5] = {{1, 2, 3, 4, 5},
                      {6, 7, 8, 9, 10},
                      {11, 12, 13, 14, 15},
                      {16, 17, 18, 19, 20},
                      {21, 22, 23, 24, 25}};

  // Assume the first element is the largest initially
  int max_val = matrix[0][0];
  int max_row = 0;
  int max_col = 0;

  // Traverse the matrix to find the largest value
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      if (matrix[i][j] > max_val) {
        max_val = matrix[i][j];
        max_row = i;
        max_col = j;
      }
    }
  }

  // Print the matrix
  printf("Matrix:\n");
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      printf("%d", matrix[i][j]);
    }
    printf("\n");
  }

  printf("\nThe largest value in the matrix is: %d (at Row %d, Column %d)\n",
         max_val, max_row + 1, max_col + 1);

  return 0;
}
