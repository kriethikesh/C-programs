#include <stdio.h>
int main() {
    float salary,bonus;
    char gender;
    printf("Enter the Gender(M|F) and salary:\n");
    scanf("%c %f",&gender,&salary);
    if(gender=='M'){
        if(salary<10000)
            bonus=salary*0.07;
        else 
            bonus=salary*0.05; 
    }
    else if(gender=='F'){
        if(salary<10000)
            bonus=salary*0.12;
        else 
           bonus=salary*0.1; 
    }
    printf("The Bonus is : %f\n",bonus);
    printf("The normal salary is : %f\n",salary);
    printf("The Bonus + salary is : %f",bonus+salary);
    return 0;
}