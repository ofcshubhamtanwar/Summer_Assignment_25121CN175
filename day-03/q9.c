#include <stdio.h>
#include <math.h>

int main() {
    int num, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    // 0 and 1 are not prime numbers
    if (num <= 1) {
        isPrime = 0;
    } else {
        // Check for factors from 2 up to the square root of num
        for (i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}   