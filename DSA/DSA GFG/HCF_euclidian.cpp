#include <iostream>
using namespace std;

int gcd(int a, int b) {
  while (a != b) {
    if (a > b) {
      a = a - b;
    } else {
      b = b - a;
    }
  }
  return a;
}

int main() {
  int choice;
  do {
    cout << "1. Calculate HCF\n";
    cout << "2. Exit\n";
    cin >> choice;

    switch (choice) {
    case 1: {
      int a, b;
      cout << "Enter first positive integer: ";
      cin >> a;
      cout << "Enter second positive integer: ";
      cin >> b;

      if (a <= 0 || b <= 0) {
        cout << "Error: Numbers must be positive (greater than 0).\n";
      } else {
        cout << "HCF of " << a << " and " << b << " is: " << gcd(a, b) << "\n";
      }
      break;
    }
    case 2:
      cout << "Exiting the program...\n";
      break;
    default:
      cout << "Invalid choice! Please try again.\n";
    }
  } while (choice != 2);

  return 0;
}