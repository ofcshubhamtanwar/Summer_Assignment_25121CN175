#include <stdio.h>

int main() {
    int num, rem, product = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle negative numbers by converting to positive
    if (num < 0) {
        num = -num;
    }

    // Special case for 0
    if (num == 0) {
        printf("Product of digits: 0\n");
        return 0;
    }

    while (num != 0) {
        rem = num % 10;       // Get the last digit
        product = product * rem; // Multiply it to the product
        num = num / 10;       // Remove the last digit
    }

    printf("Product of digits: %d\n", product);

    return 0;
}   