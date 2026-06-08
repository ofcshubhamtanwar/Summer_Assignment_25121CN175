#include <stdio.h>

int main() {
    int i, j;
    // Loop for each row
    for (i = 1; i <= 5; i++) {
        // Loop to print numbers in the current row
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        // Move to the next line after printing the row
        printf("\n");
    }
    return 0;
}   
