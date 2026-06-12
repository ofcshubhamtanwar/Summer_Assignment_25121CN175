#include <stdio.h>

int main() {
    int size, i;
    int evenCount = 0;
    int oddCount = 0;

    // Input array size
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input array elements
    int arr[size];
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Count even and odd elements
    for (i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    // Output results
    printf("Total number of even numbers: %d\n", evenCount);
    printf("Total number of odd numbers: %d\n", oddCount);

    return 0;
}   