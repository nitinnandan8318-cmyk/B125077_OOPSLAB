#include<iostream>
using namespace std;
class movieticket{
    int price;
    char name[30];
    int number;
    public:
        void getdata(){
            cout<<"enter movie name:";
            cin>>name;
            cout<<"enter number of tickets:";
            cin>>number;
            cout<<"enter ticket price :";
            cin>>price;
        }
        int total(){
            return number*price;
        }
        int display(){
            cout<<endl<<"movie name:"<<name<<endl;
            cout<<"number of tickets:"<<number<<endl;
            cout<<"price of ticket:"<<price<<endl;
            cout<<"total cost:"<<total()<<endl;
        }
};
int main(){
    movieticket m;
    m.getdata();
    m.display();
    return 0;
}