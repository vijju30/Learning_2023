#include <stdio.h>

// Function to print the bits of an integer
void Bits(int num) {
    int i;
    unsigned int mask = 1 << 31;  // Starting with the leftmost bit

    for (i = 0; i < 32; i++) {
        // Check if the bit is set or not
        if (num & mask)
            printf("1");
        else
            printf("0");

        // Shift the mask to the right
        mask >>= 1;
    }

    printf("\n");
}

int main() {
    int n;
    printf("Enter a 32-bit integer: ");
    scanf("%d", &n);

    printf("Bits representation: ");
    Bits(n);

    return 0;
}