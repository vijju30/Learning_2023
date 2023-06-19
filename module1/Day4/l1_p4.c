#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};  // Example array
    int size = sizeof(arr) / sizeof(arr[0]);  // Calculate the size of the array
    int evenSum = 0;
    int oddSum = 0;

    // Calculate the sums of even and odd elements
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            evenSum += arr[i];
        } else {
            oddSum += arr[i];
        }
    }

    // Calculate the difference between even and odd sums
    int difference = evenSum - oddSum;

    // Print the difference
    printf("Difference: %d\n", difference);

    return 0;
}
