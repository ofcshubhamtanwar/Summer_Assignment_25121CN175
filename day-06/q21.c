#include <stdio.h>

int main() {
    int n, i = 0, binary[32];
    
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    
    // Handle zero explicitly
    if (n == 0) {
        printf("Binary equivalent: 0\n");
        return 0;
    }
    
    // Convert decimal to binary
    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }
    
    // Print binary array in reverse order
    printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
    
    return 0;
}   