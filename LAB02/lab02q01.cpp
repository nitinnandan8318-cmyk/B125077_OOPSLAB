#include<iostream>
using namespace std;
class car{
    int number;
    char name[50];
    int modelyear;
    public:
        void getdata(){
            cout<<"enter car name:";
            cin>>name;
            cout<<"enter car number:";
            cin>>number;
            cout<<"enter model year:";
            cin>>modelyear;
        }
        void display(){
            cout<<"car name:"<<name<<endl;
            cout<<"car number:"<<number<<endl;
            cout<<"car model year:"<<modelyear<<endl;
        }
};
int main(){
    car r;
    r.getdata();
    r.display();
    return 0;
}