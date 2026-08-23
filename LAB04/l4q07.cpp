#include<iostream>
#include<string.h>
using namespace std;
class meseummanager;
class exhibit{
    char name[30],status[30];
    float id,visitor;
public:
    void getdata(){
        cout<<"enter exhibit name : ";
        cin>>name;
        cout<<"enter exhibit id : ";
        cin>>id;
        cout<<"enter visitor count : ";
        cin>>visitor;
        cout<<"enter exhibit status(open/close) :";
        cin>>status;
    }
    friend class meseummanager; 
};
class meseummanager{
public:
    void display(exhibit e){
        cout<<"exhibit name : "<<e.name<<endl<<"exhibit id : "<<e.id<<endl<<"visitor count : "<<e.visitor<<endl<<"exhibit status : "<<e.status<<endl;
    }
    void openexhibit(exhibit e){
        strcpy(e.status,"open");
    }
    void closeexhibit(exhibit e){
        strcpy(e.status,"close");
    }
    void addvisitor(exhibit e){
        int newvisitor;
        cout<<"enter number of visitor wanna add :";
        cin>>newvisitor;
        e.visitor += newvisitor;
    }
};
int main(){
    exhibit e;
    e.getdata();
    meseummanager m;
    m.display(e);
    m.addvisitor(e);
    m.closeexhibit(e);
    m.openexhibit(e);
    return 0;
}