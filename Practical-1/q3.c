#include<stdio.h>

int main() {

    int a,b,c,d,e;
    printf("Enter 5 numbers: ");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    int sum = a+b+c+d+e;
    float percentage = ((float)sum/500)*100;
    printf("Sum: %d\n", sum);
    printf("Percentage: %f\n", percentage);
    return 0;
}