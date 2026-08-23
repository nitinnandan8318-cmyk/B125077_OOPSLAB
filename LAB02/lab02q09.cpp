#include<iostream>
using namespace std;
class cricketplayer{
    int match;
    char name[30];
    int run;
    public:
        void getdata(){
            cout<<"enter player name:";
            cin>>name;
            cout<<"enter number of matches played:";
            cin>>match;
            cout<<"enter total run scored:";
            cin>>run;
        }
        int avg(){
            return (float)run/match;
        }
        int display(){
            if(avg()<20)
                cout<<"player performance : poor"<<endl;
            else if(avg()<35 && avg()>=20)
                cout<<"player performance : average"<<endl;
            else if(avg()>=35 && avg()<50)
                cout<<"player performance : good"<<endl;
            else
                cout<<"player performance : excellent"<<endl;
        }
};
int main(){
    cricketplayer c;
    c.getdata();
    c.display();
    return 0;
}