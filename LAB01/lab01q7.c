#include<stdio.h>
#include<string.h>
struct student{
    int rollno;
    char name[30];
    int marks;
}s[5];
int main(){
    int sum=0;
    for(int i=0;i<5;i++){
        printf("enter student name:");
        scanf(" %[^\n]",s[i].name);
        printf("enter roll number:");
        scanf("%d",&s[i].rollno);
        printf("enter marks:");
        scanf("%d",&s[i].marks);
        printf("\n");
    }
    int max=0;
    for(int i=0;i<5;i++){
        sum += s[i].marks;
        if(s[i].marks>s[max].marks){
            max=i;
        }
    }
    printf("\nhighest marks scored student:%s\naverage marks of this class:%f",s[max].name,(float)sum/5);
    return 0;
}
