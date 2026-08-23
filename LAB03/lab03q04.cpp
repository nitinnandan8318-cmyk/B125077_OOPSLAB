#include<iostream>
using namespace std;
int main(){
    int n,x,c=0;
    cout<<"enter number of elements :";
    cin>>n;
    int *arr = new int[n];
    cout<<"enter "<<n<<" elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter number you wanna search : ";
    cin>>x;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            cout<<x<<" found at position "<<i<<endl;
            c++;
            break;
        }
    }
    if(c==0)
        cout<<x<<" not found in this array."<<endl;
    delete[] arr;
    arr = nullptr;
    return 0;
}