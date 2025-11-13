// display via function
#include <stdio.h>
void arraout(int n,int a[]){
    printf("The Array elements are : ");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
void arrain(int n,int a[]){
    printf("Enter the array elements : ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    arraout(n,a);
}

int main() {
    int n,arr[50];
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    arrain(n,arr);
    return 0;
}