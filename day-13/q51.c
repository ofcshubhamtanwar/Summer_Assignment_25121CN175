#include <stdio.h>

int main() {
    int arr[] = {10, 20, 5, 30, 25};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max, min;

   
    max = arr[0];
    min = arr[0];

   
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Largest element: %d\n", max);
    printf("Smallest element: %d\n", min);

    return 0;
}   