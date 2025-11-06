#include <stdio.h>
int main() {
    float kilo,miles;
    printf("Enter the kilometers : ");
    scanf("%f",&kilo);
    miles=kilo*0.621371;
    printf("the miles is : %.2f",miles);   
    return 0;
}