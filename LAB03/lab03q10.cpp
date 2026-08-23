#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter number of rows : ";
    cin>>m;
    cout<<"enter number of column : ";
    cin>>n;
    int **arr = new int *[m];
    for(int i=0;i<m;i++){
        arr[i] = new int[n];
    }
    int **brr = new int *[m];
    for(int i=0;i<m;i++){
        brr[i] = new int[n];
    }
    int **crr = new int *[m];
    for(int i=0;i<m;i++){
        crr[i] = new int[n];
    }
    cout<<endl<<"enter elements of first matrix "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    cout<<endl<<"enter elements of second matrix "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>brr[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            crr[i][j] = arr[i][j]+brr[i][j];
        }
    }
    cout<<endl<<"result matrix "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<crr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<m;i++){
        delete[] arr[i];
        arr[i] = nullptr;
    }
    for(int i=0;i<m;i++){
        delete[] brr[i];
        brr[i] = nullptr;
    }   
    delete[] arr;
    arr = nullptr;
    delete[] brr;
    brr = nullptr;
    return 0; 
}