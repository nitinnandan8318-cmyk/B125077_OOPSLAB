#include<stdio.h>
int main(){
    int n,c,j=0;
    printf("enter the size of an array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements of array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the you wanna search:");
    scanf("%d",&c);
    for(int i=0;i<n;i++){
        if(arr[i]==c){
            printf("element %d found at position:%d\n",c,i);
            j++;
            break;
        }
    }
    if(j==0){
        printf("element %d not found.",c);
    }
    return 0;
}