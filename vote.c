// eligible to vote
#include <stdio.h>
void main() {
    int age;
    printf("Enter the Age : ");
    scanf("%d",&age);
    if(age>=18)
        printf("You are eligible to Vote");
    else
       printf("You are not eligible to Vote"); 
}