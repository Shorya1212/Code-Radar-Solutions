#include<stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d",&num);
    printf("Hexadecimal: %X\n",num);
    printf("Octal: %o\n",num);
    return 0;
}