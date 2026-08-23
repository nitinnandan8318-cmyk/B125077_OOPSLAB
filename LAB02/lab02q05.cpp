#include<iostream>
using namespace std;
class mobilerecharge{
    long number;
    char name[30];
    int balance;
    int recharge;
    public:
        void getdata(){
            cout<<"enter name:";
            cin>>name;
            cout<<"enter last 3 mobile number:";
            cin>>number;
            cout<<"enter balance:";
            cin>>balance;
            cout<<"enter amount to be recharge:";
            cin>>recharge;
        }
        int display(){
            balance = balance+recharge;
            cout<<"updated balance:"<<balance<<endl;
        }
};
int main(){
    mobilerecharge m;
    m.getdata();
    m.display();
    return 0;
}