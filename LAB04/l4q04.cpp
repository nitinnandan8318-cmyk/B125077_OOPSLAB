#include<iostream>
#include<string.h>
using namespace std;
class electricmeter{
    char name[30],usage[30];
    float number,unit;
public:
    void getdata(){
        cout<<"enter meter number : ";
        cin>>number;
        cout<<"enter consumer name : ";
        cin>>name;
        cout<<"enter unit consumed by user : ";
        cin>>unit;
    }
    friend void checkusage(electricmeter e); 
};
void checkusage(electricmeter e){
    if(e.unit<100)
        strcpy(e.usage,"low ");
    else if(e.unit>=100 && e.unit<300)
        strcpy(e.usage,"modrate");
    else
        strcpy(e.usage,"high");
    cout<<endl<<"meter number : "<<e.number<<endl;
    cout<<"consumer name : "<<e.name<<endl;
    cout<<"electricity usage : "<<e.usage<<endl;
}
int main(){
    electricmeter e;
    e.getdata();
    checkusage(e);
    return 0;
}