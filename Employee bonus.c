//Employee Bonus Calculator
#include <stdio.h>
int main() {
    float salary,bonus,score;
    printf("Enter Salary : ");
    scanf("%f",&salary);
    printf("Enter Performance Score : ");
    scanf("%f",&score);
    if(score>=90){
        bonus=salary*0.20;
        printf("Bonus : %.2f\n",bonus);
        printf("Message : Excellent Performance");
    }
    else if(score>=75&&score<=89){
        bonus=salary*0.15;
        printf("Bonus : %.2f\n",bonus);
        printf("Message : Very Good Performance");
    }
    else if(score>=50&&score<=74){
        bonus=salary*0.10;
        printf("Bonus : %.2f\n",bonus);
        printf("Message : Good Performance");
    }
    else if(score<50){
        bonus=salary*0;
        printf("Bonus : %.2f\n",bonus);
        printf("Message : Need Improvement");
    }
    return 0;
}