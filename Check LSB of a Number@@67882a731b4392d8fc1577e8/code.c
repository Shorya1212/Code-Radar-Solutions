#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);  // Read the input integer
    
    // Check the least significant bit using bitwise AND with 1
    if (num & 1) {
        printf("Set\n");       // LSB is 1
    } else {
        printf("Not Set\n");    // LSB is 0
    }
    
    return 0;
}