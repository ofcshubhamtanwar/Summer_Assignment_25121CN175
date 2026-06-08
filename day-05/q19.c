#include <stdio.h>

int main() {
    int n = 24;
    printf("Factors: ");
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
            if (i != n / i) {
                printf("%d ", n / i);
            }
        }
    }
    return 0;
}   
