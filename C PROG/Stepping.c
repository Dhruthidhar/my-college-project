#include <stdio.h>
#include <stdlib.h>

int isStepping(int num) {
  if (num < 10) {
    return 1;
  }

  return ((abs((num % 10) - ((num / 10) % 10))) == 1 && isStepping(num / 10));
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