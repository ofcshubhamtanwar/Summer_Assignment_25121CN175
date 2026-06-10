#include <stdio.h>

int main() {
    int rows, i, j, k, space;
    char ch;

    printf("Enter the number of rows (max 26): ");
    scanf("%d", &rows);

    for (i = 0; i < rows; i++) {
        // 1. Print leading spaces
        space = rows - 1 - i;
        for (j = 0; j < space; j++) {
            printf(" ");
        }

        // 2. Print ascending part (A to current char)
        for (j = 0; j <= i; j++) {
            ch = 'A' + j;
            printf("%c", ch);
        }

        // 3. Print descending part (current char - 1 back to A)
        for (j = i - 1; j >= 0; j--) {
            ch = 'A' + j;
            printf("%c", ch);
        }

        printf("\n");
    }

    return 0;
}   