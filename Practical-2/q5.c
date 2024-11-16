#include <stdio.h>

int main() {
    float radius, diameter, circumference, area;
    const float pi = 3.14159;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    diameter = 2 * radius;
    circumference = 2 * pi * radius;
    area = pi * radius * radius;

    printf("Diameter: %.2f\n", diameter);
    printf("Circumference: %.2f\n", circumference);
    printf("Area: %.2f\n", area);

    return 0;
}


