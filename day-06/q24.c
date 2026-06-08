#include <stdio.h>
#include <math.h>

long long power(int base, int exp) {
    long long result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int x, n;
    printf("Enter base and exponent: ");
    scanf("%d %d", &x, &n);
    printf("Result: %lld\n", power(x, n));
    return 0;
}   
