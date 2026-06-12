#include <stdio.h>

void fibonacciSeries(int n) {
    int a = 0, b = 1, c;
    if (n <= 0) return;
    
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
}

int main() {
    int terms;
    printf("Enter number of terms: ");
    scanf("%d", &terms);
    printf("Fibonacci Series: ");
    fibonacciSeries(terms);
    return 0;
}   