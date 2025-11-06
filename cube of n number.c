//Cube of n number
#include <stdio.h>
void main() {
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d ",i*i*i);
    }
}