#include <stdio.h>

int main() {
    int number;
    unsigned long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Error: Factorial of a negative number doesn't exist.");
    } else {
        for (int i = 1; i <= number; i++) {
            fact *= i;
        }
        printf("Factorial of %d = %llu\n", number, fact);
    }
    return 0;
}   