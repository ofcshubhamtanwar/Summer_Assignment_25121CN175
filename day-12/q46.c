#include <stdio.h>
#include <math.h>

// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int originalNum = num;
    int remainder, result = 0;
    int n = 0;

    // Step 1: Count the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    // Step 2: Calculate the sum of digits raised to the power of n
    originalNum = num;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    // Step 3: Return true if result equals the original number
    return (result == num);
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}   