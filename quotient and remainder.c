#include <stdio.h>
void main(){
    float num1,num2,quoti,remain;
    printf("Enter the two numbers : ");
    scanf("%f %f",&num1,&num2);
    quoti=num1/num2;
    remain=(int)num1%(int)num2;
    printf("The quotient is : %.2f\n",quoti);
    printf("The remainder is : %.f",remain);
}