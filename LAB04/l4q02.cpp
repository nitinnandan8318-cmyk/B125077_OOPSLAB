#include<iostream>
#include<string.h>
using namespace std;
class useraccount{
    char name[30],status[30];
    int attampt;
public:
    useraccount(char* n){
        strcpy(name,n);
        attampt=0;
    }
    void login(){
        cout<<"unsuccessfull login"<<endl;
        attampt++;
    }
    friend void checkaccount(useraccount);
};
void checkaccount(useraccount u){
    if(u.attampt<=3)
        strcpy(u.status,"account active");
    else
        strcpy(u.status,"account locked");
    cout<<endl<<"username "<<u.name<<endl<<"no of login attampt "<<u.attampt<<endl<<"status : "<<u.status<<endl;
}
int main(){
    char name[30] = "rahul";
    useraccount u(name);
    checkaccount(u);
    u.login();
    checkaccount(u);
    u.login();
    checkaccount(u);
    u.login();
    checkaccount(u);
    return 0;
}