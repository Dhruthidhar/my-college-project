#include <stdio.h>

int main() {
    int i;

    // 1. Using a for loop
    printf("Using for loop:\n");
    for (i = 0; i < 10; i++) {
        printf("*");
    }
    printf("\n\n");

    // 2. Using a while loop
    printf("Using while loop:\n");
    i = 0;
    while (i < 10) {
        printf("*");
        i++;
    }
    printf("\n\n");

    // 3. Using a do-while loop
    printf("Using do-while loop:\n");
    i = 0;
    do {
        printf("*");
        i++;
    } while (i < 10);
    printf("\n");

    return 0;
}
