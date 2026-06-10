#include <stdio.h>

int main() {
    int rows = 5;
    int i, j;

    for (i = 1; i <= rows; i++) {
        // Print ascending part: 1 to i
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        // Print descending part: i-1 down to 1
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        // Move to the next line
        printf("\n");
    }

    return 0;
}   