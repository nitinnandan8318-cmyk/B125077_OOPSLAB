#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of elements :";
    cin>>n;
    int *arr = new int[n];
    cout<<"enter "<<n<<" elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl<<"array in reverse order"<<endl;
    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    delete[] arr;
    arr = nullptr;
    return 0;
}