#include <stdio.h>

int main() {
    int rows = 5; // Corresponds to the 5 rows in the example
    int i, j, k;

    for (i = 0; i < rows; i++) {
        // Print leading spaces
        for (j = 0; j < i; j++) {
            printf(" ");
        }
        // Print stars
        for (k = 0; k < 2 * (rows - i) - 1; k++) {
            printf("*");
        }
        // Move to next line
        printf("\n");
    }
    return 0;
}   