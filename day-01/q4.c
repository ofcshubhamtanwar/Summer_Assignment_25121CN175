#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle negative numbers
    num = abs(num);

    // Special case for 0
    if (num == 0) {
        count = 1;
    } else {
        while (num != 0) {
            num /= 10;
            count++;
        }
    }
    printf("Number of digits: %d\n", count);
    return 0;
}   
