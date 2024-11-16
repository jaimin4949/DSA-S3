#include <stdio.h>

int main() {
    float totalSellingPrice, profit, costPrice;
    
    printf("Enter the total selling price of 15 items: ");
    scanf("%f", &totalSellingPrice);
    
    printf("Enter the profit earned on the total: ");
    scanf("%f", &profit);
    
    costPrice = (totalSellingPrice - profit) / 15;
    
    printf("Cost price of one item: %.2f\n", costPrice);
    
    return 0;
}

