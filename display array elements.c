// display a array
#include <stdio.h>
int main() {
    int n,arr[50];
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    printf("Enter the array elements : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The Array elements are : ");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}