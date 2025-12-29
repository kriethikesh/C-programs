#include <stdio.h>
struct Student{
    int rollno;
    char name[30];
    float mark;
};
void main(){
    FILE *fp;
    fp=fopen("student.txt","w");
    struct Student stu;
    int n;
    printf("Enter the No. of Student : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the Roll number : ");
        scanf("%d",&stu.rollno);
        printf("Enter the Name : ");
        scanf(" %[^\n]",stu.name);
        printf("Enter the Mark : ");
        scanf("%f",&stu.mark);
        fprintf(fp,"Roll No. : %d\nName : %s\nMark : %.2f\n\n\n",stu.rollno,stu.name,stu.mark);
    }
    int roll;
    char Name[30];
    float Mark;
    fscanf(fp,"%d %s %d",&roll,Name,&Mark);
    printf("%d %s %f",roll,Name,Mark);
    fclose(fp);
}