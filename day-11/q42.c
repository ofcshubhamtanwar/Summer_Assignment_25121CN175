#include <stdio.h>

// Function declaration
int max(int num1, int num2);

int main() {
    int a, b, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    result = max(a, b);
    printf("Maximum number is: %d\n", result);

    return 0;
}

// Function definition
int max(int num1, int num2) {
    if (num1 > num2)
        return num1;
    else
        return num2;
}   