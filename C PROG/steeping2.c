#include <stdio.h>

int main() {
  int N, M;
  if (scanf("%d %d", &N, &M) != 2)
    return 0;

  int q[100000];
  int front = 0, rear = 0;

  for (int i = 0; i <= 9; i++) {
    q[rear++] = i;
  }

  int found = 0;

  while (front < rear) {
    int num = q[front++];

    if (num >= N && num <= M) {
      printf("%d\n", num);
      found = 1;
    }

    if (num == 0 || num > M)
      continue;

    int last = num % 10;

    // We check (M - last) / 10 to prevent overflow before multiplying
    if (last > 0 && num <= (M - (last - 1)) / 10) {
      q[rear++] = num * 10 + (last - 1);
    }

    if (last < 9 && num <= (M - (last + 1)) / 10) {
      q[rear++] = num * 10 + (last + 1);
    }
  }

  if (!found)
    printf("-1\n");

  return 0;
}
