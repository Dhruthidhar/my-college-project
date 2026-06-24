#include <stdio.h>
#include <stdlib.h>

int main() {
  int start, end;
  scanf("%d", &start);
  scanf("%d", &end);
  for (int i = start; i <= end; i++) {
    if (is_stepping(i)) {
    }
  }

  return 0;
}

int is_stepping(int num) {

  int prev = num % 10; // prev=0
  num = num / 10;      // num=1
  while (num > 0) {
  }
}
