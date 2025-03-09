#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Hexadecimal: %X\n", num); // %X for uppercase hexadecimal
    printf("Octal: %o\n", num);       // %o for octal

    return 0;
}