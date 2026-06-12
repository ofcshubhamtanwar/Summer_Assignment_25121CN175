#include <stdio.h>

// Function to check if a number is perfect
int isPerfect(int num) {
    int sum = 0;
    // Check divisors from 1 to num/2
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    // Return 1 if sum equals the number, 0 otherwise
    return (sum == num);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPerfect(num)) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }
    return 0;
}   