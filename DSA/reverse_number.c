#include <stdio.h>

int main() {
    int num, temp, reversed = 0, remainder;

    printf("Enter an integer to reverse: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        reversed = reversed * 10 + remainder;
        temp /= 10;
    }

    printf("Original number: %d\n", num);
    printf("Reversed number: %d\n", reversed);

    return 0;
}
