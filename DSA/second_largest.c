#include <stdio.h>
#include <limits.h>

int main() {
    int n, i, val;
    int largest = INT_MIN;
    int second_largest = INT_MIN;

    printf("Enter the number of elements (must be >= 2): ");
    if (scanf("%d", &n) != 1 || n < 2) {
        printf("Error: You must enter at least 2 numbers.\n");
        return 1;
    }

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        if (scanf("%d", &val) != 1) {
            printf("Invalid input.\n");
            return 1;
        }

        if (val > largest) {
            second_largest = largest;
            largest = val;
        } else if (val > second_largest && val != largest) {
            second_largest = val;
        }
    }

    if (second_largest == INT_MIN) {
        printf("No unique second largest number exists (all numbers might be the same).\n");
    } else {
        printf("The second largest number is: %d\n", second_largest);
    }

    return 0;
}
