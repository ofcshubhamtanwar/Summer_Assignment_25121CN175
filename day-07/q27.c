#include <stdio.h>

// Recursive function to calculate sum of digits
int sumOfDigits(int num) {
    if (num == 0)
        return 0;
    return (num % 10) + sumOfDigits(num / 10);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Handle negative numbers by taking absolute value if needed, 
    // though standard logic assumes positive input for this simple recursion.
    if (num < 0) num = -num;

    printf("Sum of digits: %d\n", sumOfDigits(num));
    return 0;
}   