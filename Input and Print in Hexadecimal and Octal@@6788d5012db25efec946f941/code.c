#include <stdio.h>

int main() {
    int num;

    printf("A single integer: ");
    scanf("%d", &num);

    printf("Hexadecimal: %X\n", num);
    printf("Octal: %o\n", num);

    return 0;
}