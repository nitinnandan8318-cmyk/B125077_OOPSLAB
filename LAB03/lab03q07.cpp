#include<iostream>
#include<cctype>
using namespace std;
int main(){
    int n;
    cout<<"enter size of character array:";
    cin>>n;
    char *arr = new char[n];
    cin.ignore();
    cout<<"enter string:";
    cin.getline(arr,n+1);
    int v=0,c=0,d=0,s=0;
    for(int i=0;arr[i]!='\0';i++){
        char ch = arr[i];
        if(isalpha(ch)){
            ch = tolower(ch);
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                v++;
            else
                c++;
        }else if(isdigit(ch))
            d++;
        else if(ch==' ')
            s++;
    }
    cout<<endl<<"vowels : "<<v<<endl;
    cout<<"consonants : "<<c<<endl;
    cout<<"digit : "<<d<<endl;
    cout<<"spaces : "<<s<<endl;
    delete[] arr;
    arr = nullptr;
    return 0;
}