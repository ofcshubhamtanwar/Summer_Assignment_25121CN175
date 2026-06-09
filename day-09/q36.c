#include <stdio.h>

int main() {
    int i, j, rows;

    // Accept the number of rows (and columns) for the square
    printf("Enter the number of rows (and columns): ");
    scanf("%d", &rows);

    // Outer loop for rows
    for (i = 1; i <= rows; i++) {
        // Inner loop for columns
        for (j = 1; j <= rows; j++) {
            // Print stars at the boundary positions
            if (i == 1 || i == rows || j == 1 || j == rows) {
                printf("*");
            } else {
                // Print space inside the square
                printf(" ");
            }
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}   
