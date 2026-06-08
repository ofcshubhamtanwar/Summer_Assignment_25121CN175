#include <stdio.h>

int main() {
    int start, end, i, j, isPrime;
    
    printf("Enter the start and end of the range: ");
    scanf("%d %d", &start, &end);
    
    printf("Prime numbers between %d and %d are:\n", start, end);
    
    for (i = start; i <= end; i++) {
        isPrime = 1;
        
        // 0 and 1 are not prime numbers
        if (i == 0 || i == 1) {
            isPrime = 0;
        }
        
        // Check for factors from 2 to i/2
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        
        if (isPrime) {
            printf("%d ", i);
        }
    }
    
    return 0;
}   
