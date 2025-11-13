//Sum of Array elements
#include <stdio.h>
int main() {
    int n,arr[50],sum=0;
    printf("Enter the no. of element : ");
    scanf("%d",&n);
    printf("Enter the %d Array elements : ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }  
    printf("The Sum of the Array is %d",sum);
    return 0;
}