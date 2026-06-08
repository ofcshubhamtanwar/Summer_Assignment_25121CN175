#include <stdio.h>

// Recursive function with an accumulator for the reversed number
int reverseNumber(int num, int reversed) {
    // Base case: if num is 0, return the accumulated reversed number
    if (num == 0) {
        return reversed;
    }
    // Recursive step: extract last digit, append to reversed, and call with remaining number
    return reverseNumber(num / 10, reversed * 10 + num % 10);
}

int main() {
    int num = 12345;
    int result = reverseNumber(num, 0);
    printf("Reverse of %d is %d\n", num, result);
    return 0;
}   