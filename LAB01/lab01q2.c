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
    printf("\narray in reverse order\n");
    for(int i=n-1;i>=0;i--){
        printf("%d\t",arr[i]);
    }
}