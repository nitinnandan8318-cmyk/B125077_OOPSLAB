#include<stdio.h>
void swap(int *x,int *y){
    int temp=0;
    temp = *y;
    *y = *x;
    *x = temp;
}
int main(){
    int x,y;
    printf("enter first integer:");
    scanf("%d",&x);
    printf("enter second integer:");
    scanf("%d",&y);
    swap(&x,&y);
    printf("after swapping\nfirst integer:%d\nsecond integer:%d",x,y);
}