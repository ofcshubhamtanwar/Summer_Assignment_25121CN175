#include <stdio.h>

// Recursive function to calculate factorial
int factorial(int n) {
    // Base case: factorial of 0 or 1 is 1
    if (n == 0 || n == 1) {
        return 1;
    }
    // Recursive case: n * factorial(n - 1)
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;
    
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is %d\n", num, factorial(num));
    }
    
    return 0;
}   