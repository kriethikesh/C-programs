//Triangle types
#include <stdio.h>
int main() {
    float s1,s2,s3;
    printf("Enter the 3 sides of a triangle : ");
    scanf("%f %f %f",&s1,&s2,&s3);
    if ((s1+s2)>s3 && (s2+s3)>s1 && (s3+s1)>s2)
    {
        if((s1==s2)&&(s2==s3)&&(s3==s1))
            printf("Triangle is Equilateral");
        else if((s1==s2)||(s2==s3)||(s3==s1))
            printf("Triangle is Isosceles");
        else
            printf("Triangle is Scalane");
    } 
    else
        printf("Invalid Triangle Sides");
    return 0;
}