#include <stdio.h>

// Function to calculate GCD using Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate LCM
int lcm(int a, int b) {
    if (a == 0 || b == 0) return 0;
    // Use long long to prevent overflow during multiplication
    return (long long)a * b / gcd(a, b);
}

int main() {
    int n1, n2;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    printf("LCM of %d and %d is %d\n", n1, n2, lcm(n1, n2));
    return 0;
}   
