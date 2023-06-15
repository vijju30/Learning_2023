#include <stdio.h>

int main() {
    int  n1, n2;
    char operator;
    float result;

    
    printf("Enter Number1: ");
    scanf("%d", &n1);

    printf("Enter the operator: ");
    scanf(" %c", &operator);

    printf("Enter Number2: ");
    scanf("%d", &n2);
    switch (operator) {
        case '+':
            result = n1 + n2;
            break;
        case '-':
            result = n1 - n2;
            break;
        case '*':
            result = n1 * n2;
            break;
        case '/':
            if (n2 != 0) {
                result = n1 / n2;
            } else {
                printf("Error: Division by zero is not allowed.\n");
                return 1;  
            }
            break;

        case '%':
            if (n2 != 0) {
                result = n1 %  n2;
            } else {
                printf("Error: modulas by zero is not allowed.\n");
                return 1; 
            }
            break; 
        default:
            printf("Error: Invalid operator.\n");
            return 1; 
    }
printf("Result: %.2f\n", result);

    return 0;
}
