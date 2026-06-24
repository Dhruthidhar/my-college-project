#include <stdio.h>
#include <stdlib.h>

int isStepping(int num) {
  int prev = num % 10;
  num /= 10;
  while (num > 0) {
    int curr = num % 10;
    if (abs(curr - prev) != 1)
      return 0;
    prev = curr;
    num /= 10;
  }
  return 1;
}

int main() {
  int start, end;

  printf("Enter range: ");
  scanf("%d %d", &start, &end);

  printf("Stepping Numbers: ");

  for (int i = start; i <= end; i++) {
    if (isStepping(i))
      printf("%d ", i);
  }

  return 0;
}