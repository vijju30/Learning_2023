#include <stdio.h>

int bit_operations(int num, int oper_type) {
    switch (oper_type) {
        case 1:
            // Set 1st bit
            num |= 1;
            break;
        case 2:
            // Clear 31st bit
            num &= ~(1 << 31);
            break;
        case 3:
            // Toggle 16th bit
            num ^= (1 << 16);
            break;
        default:
            printf("Invalid operation type.\n");
            return -1;  
    }

    return num;
}

int main() {
    int num;  

    printf("Original Number:");
    scanf("%d",&num);

    
    int result1 = bit_operations(num, 1);  
    printf("After Setting 1st bit: %d\n", result1);

    int result2 = bit_operations(num, 2); 
    printf("After Clearing 31st bit: %d\n", result2);

    int result3 = bit_operations(num, 3);  
    printf("After Toggling 16th bit: %d\n", result3);

    return 0;
}
