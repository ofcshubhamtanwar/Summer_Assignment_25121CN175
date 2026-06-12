#include <stdio.h>

// Function definition
long int factorial(int n) {
    // Base case: 0! = 1 and 1! = 1
    if (n == 0 || n == 1) {
        return 1;
    }
    // Recursive call
    return n * factorial(n - 1);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        printf("Factorial of %d is: %ld\n", num, factorial(num));
    }
    return 0;
}   