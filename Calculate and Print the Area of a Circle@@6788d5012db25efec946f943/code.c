#include <stdio.h>

int main() {
    float radius, area;

    printf("print the area of the circle: ");
    scanf("%f", &radius);

    area = 3.14 * radius * radius; 

    printf("Area: %.2f\n", area);

    return 0;
}