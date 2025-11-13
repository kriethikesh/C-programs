// max and min
#include <stdio.h>
int main() {
    int n,arr[50];
    printf("Enter the no. of element : ");
    scanf("%d",&n);
    printf("Enter the %d Array elements : ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0],min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        else if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("The Maximum Element is %d\n",max);
    printf("The Minimum Element is %d",min);
    
    return 0;
}