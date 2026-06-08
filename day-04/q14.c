#include <stdio.h>

int fib(int n) {
    if (n <= 1) return n;
    int prev2 = 0, prev1 = 1, curr;
    for (int i = 2; i <= n; i++) {
        curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;
    }
    return prev1;
}

int main() {
    int n = 8;
    printf("F(%d) = %d\n", n, fib(n));
    return 0;
}   
