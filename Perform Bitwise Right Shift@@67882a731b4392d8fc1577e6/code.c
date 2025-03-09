#include <stdio.h>

int main() {
    int number, positions;
    printf("Enter the number and the number of positions to shift: ");
    scanf("%d %d", &number, &positions);
    int result = number << positions;
    printf("Output: %d\n", result);

    return 0;
}