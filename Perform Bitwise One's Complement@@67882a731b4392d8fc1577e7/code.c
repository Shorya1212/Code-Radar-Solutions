#include <stdio.h>

int main() {
    int number;
    
    // Input a single integer
    scanf("%d", &number);
    
    // Perform bitwise one's complement
    int result = ~number;

    // Output the result
    printf("%d\n", result);
    
    return 0;
}