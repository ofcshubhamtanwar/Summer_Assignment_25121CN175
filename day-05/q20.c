#include <stdio.h>
#include <math.h>

long long maxPrimeFactors(long long n) {
    long long maxPrime = -1;

    // Handle factor 2
    while (n % 2 == 0) {
        maxPrime = 2;
        n >>= 1; // equivalent to n /= 2
    }

    // Handle odd factors from 3 onwards
    for (int i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            maxPrime = i;
            n = n / i;
        }
    }

    // If n is a prime number greater than 2
    if (n > 2) {
        maxPrime = n;
    }

    return maxPrime;
}

int main() {
    long long n;
    printf("Enter a number: ");
    scanf("%lld", &n);
    
    printf("Largest prime factor of %lld is: %lld\n", n, maxPrimeFactors(n));
    return 0;
}   
