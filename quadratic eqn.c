//Quadratic equation
#include <stdio.h>
#include <math.h>
int main() {
    float a,b,c,D,root1,root2;
    printf("Enter the coefficient of quadratic a,b,c :\n");
    scanf("%f %f %f",&a,&b,&c);
    D=(b*b)-(4*a*c);
    float sroot=sqrt(D);
    if(D==0){
        root1=(-b)/(2*a);
        printf("The root 1 is : %f\n",root1);
    }
    else{
        root1=(-b+sqrt(D))/(2*a);
        root2=(-b-sqrt(D))/(2*a);
        printf("The root 1 is : %f\n",root1);
        printf("The root 2 is : %f",root2);
    }
    return 0;
}