#include<iostream>
#include<string.h>
using namespace std;
class eventparticipant{
    char name[30],status[30];
    int age;
public:
    eventparticipant(char* n,int a){
        age=a;
        strcpy(name,n);
    }
    friend void verifyparticipant(eventparticipant e);
};
void verifyparticipant(eventparticipant e){
    if(e.age>18)
        strcpy(e.status,"eligible");
    else
        strcpy(e.status,"not eligible");
    cout<<endl<<"user name : "<<e.name<<endl;
    cout<<"account status : "<<e.status<<endl;
}
int main(){
    char name[30] = "rahul";
    eventparticipant e(name,23);
    verifyparticipant(e);
    return 0;
}