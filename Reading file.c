#include <stdio.h>
int main() {
    FILE *fp;
    fp = fopen("C:\\Users\\kriet\\OneDrive\\Desktop\\sem 1 lab\\C labs\\extra program\\sample.txt","r");
    char ch[100];
    while(fgets(ch,2,fp)){
        printf("%s",ch);
    }
    fclose(fp);
    return 0;
}