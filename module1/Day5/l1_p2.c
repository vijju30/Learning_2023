#include <stdio.h>
#include <stdlib.h>

int convertStringToIntUsingAtoi(const char* str) {
    return atoi(str);
}

int convertStringToIntUsingStrtol(const char* str) {
    char* endPtr;
    long int result = strtol(str, &endPtr, 10);
    if (*endPtr != '\0') {
        printf("Conversion failed. Invalid input: %s\n", str);
        exit(1);
    }
    return (int)result;
}

int main() {
    const char* str = "12345";  // Example string

    int resultAtoi = convertStringToIntUsingAtoi(str);
    printf("Converted using atoi: %d\n", resultAtoi);

    int resultStrtol = convertStringToIntUsingStrtol(str);
    printf("Converted using strtol: %d\n", resultStrtol);

    return 0;
}
