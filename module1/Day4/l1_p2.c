#include <stdio.h>

int main() {
    int arr[] = {3, 7, 2, 9, 5};  // Example array
    int size = sizeof(arr) / sizeof(arr[0]);  // Calculate the size of the array
    int min = arr[0];  // Assume the first element is the minimum
    int max = arr[0];  // Assume the first element is the maximum

    // Find the minimum and maximum values
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Print the minimum and maximum values
    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);

    return 0;
}
