#include<iostream>
using namespace std;
class waterbill{
    int number;
    char name[30];
    float consum;
    public:
        void getdata(){
            cout<<"enter consumer name:";
            cin>>name;
            cout<<"enter consumer number :";
            cin>>number;
            cout<<"enter water consumtion(in litre):";
            cin>>consum;
        }
        int total(){
            if(consum<=500)
                return (float)2*consum;
            else if(consum>500 && consum<=1000);
                return (float)2*500+3*(consum-500);
            return (float)2*500+3*500+5*(consum-1000);
        }
        int display(){
            cout<<"total bill:"<<total();
        }
};
int main(){
    waterbill w;
    w.getdata();
    w.display();
    return 0;
} 