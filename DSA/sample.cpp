#include <iostream>
using namespace std;

int factorial(int n) {
  int fact = 1;
  for (int i = 1; i <= n; ++i) {
    fact *= i;
  }
  return fact;
}

int trailingZeroes(int n) {
  int fact = factorial(n);
  int count = 0;

  // Count trailing zeros by
  // dividing the factorial by 10
  while (fact % 10 == 0) {
    count++;
    fact /= 10;
  }

  return count;
}

int main() {
  int n = 10;
  cout << trailingZeroes(n) << endl;
  return 0;
}