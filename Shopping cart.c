//Shopping Cart Discount System
#include <stdio.h>
int main() {
    float price,total;
    printf("Cart Value = ");
    scanf("%f",&price);
    if(price<1000){
        printf("The Final Bill = %.2f\n",price);
    }
    else if(price>=1000&&price<=5000){
        printf("The Final Bill = %.2f\n",price-price*0.05);
    }
    else if(price>=5001&&price<=10000){
        printf("The Final Bill = %.2f\n",price-price*0.10);
    }
    else if(price>10000){
        printf("The Final Bill = %.2f\n",price-price*0.15);
    }
    return 0;
}