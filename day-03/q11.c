#include <stdio.h>

// Function to return gcd of a and b
int gcd(int a, int b) {
    // Everything divides 0
    if (a == 0) return b;
    if (b == 0) return a;
    
    // Base case
    if (a == b) return a;
    
    // a is greater
    if (a > b) return gcd(a - b, b);
    
    // b is greater
    return gcd(a, b - a);
}

int main() {
    int a = 98, b = 56;
    printf("GCD of %d and %d is %d\n", a, b, gcd(a, b));
    return 0;
}   