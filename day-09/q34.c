#include <stdio.h>

int main() {
    int i, j;
    // Outer loop: starts at 5 and decrements to 1
    for (i = 5; i >= 1; i--) {
        // Inner loop: prints numbers from 1 to i
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        // Move to the next line after printing each row
        printf("\n");
    }
    return 0;
}   
