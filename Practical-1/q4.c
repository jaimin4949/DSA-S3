
#include<stdio.h>

int main() {

    int num;
    printf("Enter a four-digit number: ");
    scanf("%d", &num);
    int sum = 0;
    sum += num % 10;
    num /= 10;
    sum += num % 10;
    num /= 10;
    sum += num % 10;
    num /= 10;
    sum += num % 10;

    printf("Sum of digits: %d\n", sum);
    return 0;


}