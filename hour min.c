#include <stdio.h>
void main() {
    int hours,minutes,tmin;
    printf("Enter the no. of hours and no. of minutes(1-60): ");
    scanf("%d %d",&hours,&minutes);
    tmin=(hours*60)+minutes;
    printf("The Total Minutes is : %d",tmin);
}