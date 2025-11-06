#include <stdio.h>
void main() {
    float cost,sell,profit;
    printf("Enter the Cost price : ");
    scanf("%f",&cost);
    printf("Enter the Selling price: ");
    scanf("%f",&sell);
    profit=sell-cost;
    printf("The profit is %.2f",profit);
}