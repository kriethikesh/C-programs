#include <stdio.h>
int main() {
    float centi,fahren;
    printf("Enter the tempreature in centigrade : ");
    scanf("%f",&centi);
    fahren=(centi*1.8)+32;
    printf("Tempreature in Fahrenheit is : %.2f",fahren);
    return 0;
} 