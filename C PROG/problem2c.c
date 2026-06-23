#include <stdio.h>
#include <

int main() {
    int num, ld, rev = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    while (num != 0) {
        ld = num % 10;
        printf("%d",ld);
    }
    

    return 0;
}