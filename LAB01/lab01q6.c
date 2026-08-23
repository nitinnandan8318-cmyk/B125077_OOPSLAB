#include<stdio.h>
#include<string.h>
struct student{
    int rollno;
    char name[30];
    int marks;
}s[5];
int main(){
    for(int i=0;i<5;i++){
        printf("enter student name:");
        scanf("%s",s[i].name);
        printf("enter roll number:");
        scanf("%d",&s[i].rollno);
        printf("enter marks:");
        scanf("%d",&s[i].marks);
        printf("\n");
    }
    printf("\nstudent details");
    for(int i=0;i<5;i++){
        printf("\nstudent name:%s\nroll number:%d\nmarks obtained:%d\n",s[i].name,s[i].rollno,s[i].marks);
    }
    return 0;
}
