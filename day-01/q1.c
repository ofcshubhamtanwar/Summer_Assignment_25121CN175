#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input validation
    do {
        printf("Enter a positive integer: ");
        scanf("%d", &n);
        if (n <= 0) {
            printf("Invalid input. The number must be a positive integer.\n");
        }
    } while (n <= 0);

    // Calculate sum using loop
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}   


