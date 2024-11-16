#include <stdio.h>
int main() {
    char num[6]; 
    printf("Enter five digit number: ");
    scanf("%s", num); 
    printf("Output: ");
    for (int i = 0; i < 5; i++) {
        char dd = (num[i] == '0') ? '9' : num[i] - 1;
        printf("%c", dd);
    }
    printf("\n");
    return 0;
}











