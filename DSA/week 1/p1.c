#include <stdio.h>

int main() {
  int a[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
  printf("%d \n", a[1][2]);
  printf("%d \n", a[2][1]);
  return 0;
}
