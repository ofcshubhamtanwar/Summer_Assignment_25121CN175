#include <stdio.h>

int main() {
    int rows = 5; // Number of rows for the pyramid

    for (int i = 1; i <= rows; i++) {
        // Print leading spaces
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        
        // Print stars
        // The number of stars in row 'i' is (2 * i - 1)
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        
        // Move to the next line
        printf("\n");
    }

    return 0;
}   