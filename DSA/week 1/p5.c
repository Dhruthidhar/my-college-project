#include <stdio.h>

int main() {
  int n;
  printf("Enter the number of elements: ");
  scanf("%d", &n);

  int a[n];
  printf("Enter the elements:\n");
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  int largest = a[0];
  for (int i = 1; i < n; i++) {
    if (a[i] > largest) {
      largest = a[i];
    }
  }

  int second_largest;
  int found = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] != largest) {
      second_largest = a[i];
      found = 1;
      break;
    }
  }

  if (!found) {
    printf("There is no second largest number.\n");
    return 0;
  }

  for (int i = 0; i < n; i++) {
    if (a[i] != largest && a[i] > second_largest) {
      second_largest = a[i];
    }
  }

  printf("Second largest number is: %d\n", second_largest);
  return 0;
}
