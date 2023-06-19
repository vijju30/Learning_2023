#include <stdio.h>

void toggleCase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  // Convert lowercase to uppercase
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;  // Convert uppercase to lowercase
        }
    }
}

int main() {
    char str[] = "Hello, World!";  // Example string

    printf("Original string: %s\n", str);

    toggleCase(str);

    printf("Toggled case string: %s\n", str);

    return 0;
}
