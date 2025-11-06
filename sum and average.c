// sum and average
#include <stdio.h>
void main() {
    int N;
    printf("Enter the Number : ");
    scanf("%d",&N);
    int sum=0;
    for (int i=1;i<=N;i++){
        sum+=i;
    } 
    float average=(float)sum/N;
    printf("The sum is %d\n",sum);
    printf("The Average is %.2f",average);
}