//Electronics Store Purchase Offer
#include <stdio.h>
int main() {
    float price,total,discount;
    printf("Total Purchase : ");
    scanf("%f",&price);
    if(price<2000){
        total=price;
        discount=0;
    }
    else if(price>=2000&&price<=7000){
        total=price-price*0.05;
        discount=5;
    }
    else if(price>7000&&price<=15000){
        total=price-price*0.10;
        discount=10;
    }
    else if(price>15000){
        total=price-price*0.20;
        discount=20;
    }
    printf("The Discount : %.0f%%\n",discount);
    printf("The Final Bill: %.2f\n",total);
    if(total>10000){
        printf("Free Headphones\n");
    }
    if((int)total%2==0){
        printf("Lucky Coupon\n");
    }
    if(price>15000){
        printf("Elite Shopper");
    }
    else{
        printf("Regular Shopper");
    }
    return 0;
}