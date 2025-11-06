//calclator
#include <stdio.h>
int main() {
    int x,y;
    char operation;
    printf("Enter the two numbers : ");
    scanf("%d  %d",&x,&y);
    printf("Enter the operator : ");
    scanf(" %c",&operation);
    switch(operation){
        case '+':
            printf("%d + %d is : %d",x,y,x+y);
            break;
        case '-':
            printf("%d - %d is : %d",x,y,x-y);
            break;
        case '*':
            printf("%d * %d is : %d",x,y,x*y);
            break;
        case '/':
            printf("%d / %d is : %d",x,y,x/y);
            break;
        case '%':
            printf("%d % %d is : %d",x,y,x%y);
            break;
        default:
            printf("Invalid Operator");
    }
    return 0;
}