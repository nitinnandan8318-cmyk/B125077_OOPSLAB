#include<iostream>
using namespace std;
class employee{
    int id;
    float salary;
    char name[30];
    public:
        void getdata(){
            cout<<"enter employee id : ";
            cin>>id;
            cout<<"enter employee name : ";
            cin>>name;
            cout<<"enter salary : ";
            cin>>salary;
        }
        float Salary(){
            return salary;
        }
        void display(){
            cout<<endl<<"employee id : "<<id<<endl;
            cout<<"employee name : "<<name<<endl;
            cout<<"employee's salary : "<<salary<<endl;
        }
};
int main(){
    int n,h=0;
    float s=0;
    cout<<"enter number of employee : ";
    cin>>n;
    employee *e = new employee[n];
    for(int i=0;i<n;i++){
        cout<<"enter "<<i+1<<" employee details"<<endl;
        e[i].getdata();
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        s += e[i].Salary();
    }
    for(int i=0;i<n;i++){
        if((e[i].Salary()) > (e[h].Salary()))
            h = i;
    }
    cout<<endl<<"highest salary employee's details"<<endl;
    e[h].display();
    cout<<"average salary : "<<(s/n);
    delete[] e;
    e = nullptr;
}