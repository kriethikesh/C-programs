//description of the grade 
#include <stdio.h>
void main() {
    char grade;
    printf("Enter the Grade : ");
    scanf("%c",&grade);
    if (grade=='o'||grade=='O')
        printf("Very good grade");
    else if(grade=='a'||grade=='A')
        printf("good grade");
    else if(grade=='b'||grade=='B')
        printf("good but try to improve the grade");
    else if(grade=='c'||grade=='C')
        printf("try to improve the grade");
    else if(grade=='d'||grade=='D')
        printf("need to improve the grade");
    else
        printf("Bad grade");
}