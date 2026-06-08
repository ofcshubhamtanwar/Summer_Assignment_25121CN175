#include <stdio.h>

int countSetBits(unsigned int n) {
    int count = 0;
    while (n) {
        n &= (n - 1); // Clears the rightmost set bit
        count++;
    }
    return count;
}

int main() {
    unsigned int num = 103; // Binary: 01100111
    printf("Number of set bits: %d\n", countSetBits(num));
    return 0;
}   
