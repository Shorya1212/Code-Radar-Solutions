#include<stdio.h>
int main()
{
    double num = 1234.56789;
    scanf("%4lf",&num);
    printf("You entered: %.4lf\n",num);
    return 0;
}