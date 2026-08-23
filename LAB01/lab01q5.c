#include<stdio.h>
int sum(int *arr,int n){
    int t=0;
    for(int i=0;i<n;i++){
        t += *(arr+i);
    }
    return t;
}
int main(){
    int n;
    printf("enter the size of an array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements of array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("sum of all the integer in this array is %d",sum(arr,n));
    return 0;
}