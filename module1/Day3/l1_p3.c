#include <stdio.h>

int findLargestNumber(int num) {
    int maxNum = 0;
    int tempNum = num;

    // Iterate through each digit
    for (int i = 0; i < 4; i++) {
        // Remove the i-th digit
        int divisor = 1;
        for (int j = 0; j < i; j++) {
            divisor *= 10;
        }
        int newNum = (tempNum / (divisor * 10)) * divisor + (tempNum % divisor);

        // Update the maximum number if the new number is larger
        if (newNum > maxNum) {
            maxNum = newNum;
        }
    }

    return maxNum;
}

int main() {
    int num;
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    int largestNum = findLargestNumber(num);

    printf("The largest number obtained by deleting a single digit: %d\n", largestNum);

    return 0;
}