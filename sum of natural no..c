//sum of natural no.
#include <stdio.h>
void main(){
    int n,sum=0;
    printf("Enter the no. : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("The sum of %d Natural no. is : %d",n,sum); 
}