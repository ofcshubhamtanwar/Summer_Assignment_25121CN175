#include <stdio.h>

int main() {
    int rows, i, j;

    // Input the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Outer loop iterates from rows down to 1
    for (i = rows; i >= 1; i--) {
        // Inner loop prints stars for the current row count
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        // Move to the next line after printing stars for the current row
        printf("\n");
    }

    return 0;
}   