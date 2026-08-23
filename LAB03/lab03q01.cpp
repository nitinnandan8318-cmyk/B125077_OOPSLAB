#include<iostream>
using namespace std;
int main(){
    int *a = new int;
    int *b = new int;
    cout<<"enter first integer:";
    cin>>*a;
    cout<<"enter second integer:";
    cin>>*b;
    cout<<"sum : "<<(*a + *b)<<endl;
    cout<<"difference (a-b): "<<(*a - *b)<<endl;
    cout<<"product : "<<(*a * *b)<<endl;
    if(*b != 0)
        cout<<"quotient : "<<(*a / *b)<<endl;
    else
        cout<<"value of b cannot be zero:"<<endl;
    delete a;
    delete b;
    return 0;
}