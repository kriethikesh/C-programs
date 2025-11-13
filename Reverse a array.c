//print element in Reverse order
#include <stdio.h>
int main() {
    int n,arr[50];
    printf("Enter the no. of element : ");
    scanf("%d",&n);
    printf("Enter the %d Array elements : ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Reversed Array is : ");
    for(int i=n-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
    return 0;
}