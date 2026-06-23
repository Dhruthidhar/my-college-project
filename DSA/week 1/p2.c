#include <stdio.h>
int main() {
  int i = 1, j = 1, k = 1;
  while (i <= 10) {
    printf("*");
    i++;
  }
  printf("\n");
  for (j = 1; j <= 10; j++) {
    printf("*");
  }
  printf("\n");
  do {
    printf("*");
    k++;
  } while (k <= 10);

  return 0;
}