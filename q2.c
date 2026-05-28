#include <stdio.h>

int main() {
    int num, i;

    // Input: Ask the user for a number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Output: Print the multiplication table
    printf("Multiplication table of %d:\n", num);
    for (i = 1; i <= 10; ++i) {
        printf("%d * %d = %d\n", num, i, num * i);
    }

    return 0;
}