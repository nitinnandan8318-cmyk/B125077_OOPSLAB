#include<iostream>
#include<string.h>
using namespace std;
class printermanager;
class printer{
    char name[30],status[30];
    float pages,ink;
public:
    printer(char* n,int p,int i,char* s){
        pages=p;
        ink=i;
        strcpy(name,n);
        strcpy(status,s);
    }
    friend class printermanager; 
};
class printermanager{
public:
    void display(printer p){
        cout<<"printer name : "<<p.name<<endl<<"number of pages printed : "<<p.pages<<endl<<"ink level : "<<p.ink<<endl<<"power status : "<<p.status<<endl;
    }
    void printeron(printer p){
        strcpy(p.status,"on");
    }
    void printeroff(printer p){
        strcpy(p.status,"off");
    }
    void pagecount(printer p){
        int newpage;
        cout<<"enter new page count :";
        cin>>newpage;
        p.pages=newpage;
    }
};
int main(){
    char name[30] = "zico",status[30] = "on";
    printer p(name,47,300,status);
    printermanager m;
    m.display(p);
    m.printeron(p);
    m.printeroff(p);
    m.pagecount(p);
    return 0;
}