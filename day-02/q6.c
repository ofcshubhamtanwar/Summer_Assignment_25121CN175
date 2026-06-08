#include <stdio.h>

int main() {
    int n, reverse = 0, remainder;

    // 1. Take input from the user
    printf("Enter an integer: ");
    scanf("%d", &n);

    // 2. Reverse the number
    while (n != 0) {
        remainder = n % 10;          // Extract the last digit
        reverse = reverse * 10 + remainder; // Append digit to reverse
        n /= 10;                     // Remove the last digit from n
    }

    // 3. Print the result
    printf("Reversed Number: %d\n", reverse);

    return 0;
}   
