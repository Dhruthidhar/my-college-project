#include <stdio.h>

int main() {
  int num;
  if (scanf("%d", &num) != 1 || num <= 0) {
    return 1;
  }

  int arr[num];
  for (int i = 0; i < num; i++) {
    scanf("%d", &arr[i]);
  }

  int carry = 1;
  for (int i = num - 1; i >= 0; i--) {
    if (arr[i] < 9) {
      arr[i] = arr[i] + 1;
      carry = 0;
      break;
    }
    arr[i] = 0;
  }

  if (carry) {
    printf("1");
  }
  for (int i = 0; i < num; i++) {
    printf("%d", arr[i]);
  }
  printf("\n");

  return 0;
}
