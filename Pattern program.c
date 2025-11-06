//Pattern program
#include <stdio.h>
int main() {
    int rows;
    printf("Enter the no. of rows : ");
    scanf("%d",&rows);
    int count=0;
    for(int i=1;i<=rows;i++){
        for (int j=1;j<=i;j++){
            printf("%d ",count);
            count++;
        }
        printf("\n");
    }
    printf("\n");
    int count1=0;
    for(int i=1;i<=rows;i++){
        count1++;
        for (int j=1;j<=i;j++){
            printf("%d ",count1);
        }
        printf("\n");
    }
    printf("\n");
    for(int i=1;i<=rows;i++){
        for (int j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    printf("\n");
    for(int i=1;i<=rows;i++){
        for (int j=65;j<65+i;j++){
            printf("%c ",j);
        }
        printf("\n");
    }
    
    return 0;
}