#include <stdio.h>

int main() {
  int num, numU, numL, left, right, ld;
  printf("lower limit");
  scanf("%d", &numL);
  printf("upper limit");
  scanf("%d", &numU);

  ld = num % 10;
  left = (num * 10) + (ld - 1);
  right = (num * 10) + (ld + 1);
  printf("left=%d right=%d", left, right);
  return 0;

  // input -> 26
}