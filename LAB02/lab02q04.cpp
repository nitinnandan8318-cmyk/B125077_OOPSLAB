#include<iostream>
using namespace std;
class hotelroom{
    int roomnumber;
    char name[30];
    int days;
    int cost;
    public:
        void getdata(){
            cout<<"enter guest name:";
            cin>>name;
            cout<<"enter room number:";
            cin>>roomnumber;
            cout<<"enter number of days stayed:";
            cin>>days;
            cout<<"enter cost per day:";
            cin>>cost;
        }
        int rent(){
            return days*cost;
        }
        int display(){
            cout<<endl<<"guest name:"<<name<<endl;
            cout<<"room number:"<<roomnumber<<endl;
            cout<<"number of days stayed:"<<days<<endl;
            cout<<"cost per day:"<<cost<<endl;
            cout<<"total rent:"<<rent()<<endl;
        }
};
int main(){
    hotelroom h;
    h.getdata();
    h.display();
    return 0;
}