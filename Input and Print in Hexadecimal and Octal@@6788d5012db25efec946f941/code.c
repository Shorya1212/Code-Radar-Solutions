#include <stdio.h>

int main() {
    int num;

    printf("print the Hexadecimal and octal representations of the integer: ");
    scanf("%d", &num);

    printf("Hexadecimal: %X\n", num);
    printf("Octal: %o\n", num);

    return 0;
}