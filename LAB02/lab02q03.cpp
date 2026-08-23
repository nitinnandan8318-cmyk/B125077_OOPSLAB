#include<iostream>
using namespace std;
class temperature{
    int celsius;
    int fehreneit;
    public:
        void getdata(){
            cout<<"enter temperature in celsius:";
            cin>>celsius;
        }
        void output(){
            fehreneit = 9/5*celsius+32;
            cout<<"temperature in celsius:"<<celsius<<endl;
            cout<<"temperature in fehrenheit:"<<fehreneit<<endl;
        }
        
};
int main(){
    temperature t;
    t.getdata();
    t.output();
    return 0;
}