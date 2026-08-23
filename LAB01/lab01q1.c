#include<stdio.h>
int main(){
    int n;
    printf("enter the size of an array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements of array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    int max=arr[0];
    float sum=0;
    for(int i=0;i<n;i++){
        sum += arr[i];
        if(arr[i]<min){
            min=arr[i];
        }else if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("smallest integer:%d\nlargest integer:%d\naverage of all elements:%f",min,max,sum/n);
    return 0;
}