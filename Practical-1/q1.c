#include <stdio.h>

int main()
{

    printf("Enter basic salary: ");
    float basic;
    scanf("%f", &basic);
    float d = 0.4 * basic;
    float r = 0.2 * basic;
    float gross = basic + d + r;
    printf("Gross salary: %f\n", gross);
    return 0;
}
