#include <stdio.h>

int main()
{

    printf("Enter Distence: ");
    float distence;
    scanf("%f", &distence); 

    float feet = distence * 3280.84;
    float meters = distence * 1000;
    float inches = distence * 39370.1;
    float centimeters = distence * 100000;
    printf("Distence in Feet: %f\n", feet);
    printf("Distence in Meters: %f\n", meters);
    printf("Distence in Inches: %f\n", inches);
    printf("Distence in Centimeters: %f\n", centimeters);
    return 0;

}

