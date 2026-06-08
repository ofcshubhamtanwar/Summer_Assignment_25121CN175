#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle negative numbers by taking absolute value
    if (num < 0) {
        num = -num;
    }

    while (num != 0) {
        digit = num % 10; // Extract the last digit
        sum += digit;     // Add to sum
        num /= 10;        // Remove the last digit
    }

    printf("Sum of digits: %d\n", sum);
    return 0;
}   