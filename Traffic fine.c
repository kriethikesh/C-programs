//Traffic Fine calculator
#include <stdio.h>
int main() {
    int speed;
    printf("Enter Speed : ");
    scanf("%d",&speed);
    if(speed<=60){
        printf("Fine = Rs.0");
    }
    else if(speed>=61&&speed<=80){
        printf("Fine = Rs.500");
    }
    else if(speed>=81&&speed<=100){
        printf("Fine = Rs.1000");
    }
    else if(speed>100){
        printf("Fine = Rs.2000\n");
        printf("License Suspended");
    }
    return 0;
}