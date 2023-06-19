#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};  // Example array
    int size = sizeof(arr) / sizeof(arr[0]);  // Calculate the size of the array
    int evenIndexSum = 0;
    int oddIndexSum = 0;

    // Calculate the sums of elements at even and odd indices
    for (int i = 0; i < size; i++) {
        if (i % 2 == 0) {
            evenIndexSum += arr[i];
        } else {
            oddIndexSum += arr[i];
        }
    }

    // Calculate the difference between even index sum and odd index sum
    int difference = evenIndexSum - oddIndexSum;

    // Print the difference
    printf("Difference: %d\n", difference);

    return 0;
}
