//sum of ODD natural no.
#include <stdio.h>
void main() {
    int n,sum=0;
    printf("Enter the no. : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i+=2){
        sum=sum+i;
    }
    printf("The sum of odd natural numbers up to %d is: %d", n, sum);
}