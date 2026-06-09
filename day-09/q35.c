#include <stdio.h>

int main() {
    int i, j;
    // Loop for rows (1 to 5)
    for (i = 1; i <= 5; i++) {
        // Inner loop prints the character 'i' times
        for (j = 1; j <= i; j++) {
            // 'A' - 1 + i converts integer i to corresponding char
            // i=1 -> 'A', i=2 -> 'B', etc.
            printf("%c", 'A' - 1 + i);
        }
        // Move to the next line after printing the row
        printf("\n");
    }
    return 0;
}   
