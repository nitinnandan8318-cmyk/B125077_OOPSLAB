#include<iostream>
using namespace std;
class time{
    int hour1;
    int minute1;
    int hour2;
    int minute2;
    int t1=0,t2=0,t=0;
    public:
        void getdata(){
            cout<<"enter first time"<<endl<<"hour:";
            cin>>hour1;
            cout<<"minute:";
            cin>>minute1;
            cout<<"enter second time"<<endl<<"hour:";
            cin>>hour2;
            cout<<"minute:";
            cin>>minute2;
        }
        void calculate(){
            t1 = hour1*60+minute1; 
            t2 = hour2*60+minute2;
            t = t1+t2;
        }
        void display(){
            cout<<"result tim-e"<<endl<<"hour:"<<t/60<<endl<<"minute:"<<t%60<<endl;
        }
};
int main(){
    time t;
    t.getdata();
    t.calculate();
    t.display();
    return 0;
}