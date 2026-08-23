#include<iostream>
using namespace std;
int main(){
    int n,c=0;
    cout<<"enter number of elements :";
    cin>>n;
    int *arr = new int[n];
    cout<<"enter "<<n<<" elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0)
            c++;
    }
    cout<<"even numbers in this array :"<<c<<endl;
    cout<<"odd numbers in this array : "<<(n-c)<<endl;
    delete[] arr;
    arr = nullptr;
    return 0;
}