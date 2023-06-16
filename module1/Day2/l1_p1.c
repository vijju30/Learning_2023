#include <stdio.h>
#include <stdint.h>

void Exponent(double x) {
    uint64_t binary = *(uint64_t*)&x;
    uint16_t exponent = (binary >> 52) & 0x7FF;
    printf("Exponent in hexadecimal: 0x%X\n", exponent);
    printf("Exponent in binary: 0b");
    for (int i = 10; i >= 0; i--) {
        printf("%d", (exponent >> i) & 1);
    }
    printf("\n");
}

int main() {
    double x = 1.5;
    Exponent(x);
    return 0;
}