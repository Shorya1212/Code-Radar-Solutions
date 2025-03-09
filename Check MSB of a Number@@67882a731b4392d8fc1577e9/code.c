#include <stdio.h>

void check_msb(int number) {
    // Apply a bitwise AND with 1 << 31 to check the MSB
    if (number & (1 << 31)) {
        printf("Set\n");
    } else {
        printf("Not Set\n");
    }
}

int main() {
    int input;

    // Input single integer
    printf("Enter a 32-bit integer: ");
    scanf("%d", &input);

    // Check and output the result
    check_msb(input);
    
    return 0;
}