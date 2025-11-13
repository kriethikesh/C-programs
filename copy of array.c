//copy the array elements
#include <stdio.h>
void copy(int n,int arr[]){
    int arr1[50];
    for(int i=0;i<n;i++){
        arr1[i]=arr[i];
    }
    printf("The Element of Copied array : ");
    for(int i=0;i<n;i++){
        printf("%d ",arr1[i]);
    }
}
int main() {
    int a[]={10,20,30,40,50};
    int size=sizeof(a)/sizeof(a[0]);
    copy(size,a);
    return 0;
}