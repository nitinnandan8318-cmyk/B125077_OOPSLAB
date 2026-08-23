#include<iostream>
using namespace std;
void getdata(int *arr,int n){
    cout<<"enter "<<n<<" elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
int sum(int *arr,int n){
    int s=0;
    for(int i=0;i<n;i++){
        s += arr[i];
    }
    return s;
}
int smallest(int *arr,int n){
    int s=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<s)
            s = arr[i];
    }
    return s;
}
int largest(int *arr,int n){
    int m=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>m)
            m = arr[i];
    }
    return m;   
}
void display(int sum,int smallest,int largest){
    cout<<"sum of all the elements : "<<sum<<endl;
    cout<<"smallest integer : "<<smallest<<endl;
    cout<<"largest integer : "<<largest<<endl;
}
int main(){
    int n;
    cout<<"enter number of elements : ";
    cin>>n;
    int *arr = new int[n];
    getdata(arr,n);
    display(sum(arr,n),smallest(arr,n),largest(arr,n));
    delete[] arr;
    arr = nullptr;
    return 0;
}