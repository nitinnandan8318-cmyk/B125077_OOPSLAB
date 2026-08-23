#include<iostream>
#include<string.h>
using namespace std;
class weather{
    char name[30],condition[30];
    float temp;
public:
    weather(float t,char* n){
        temp=t;
        strcpy(name,n);
    }
    friend void generatereport(weather);
};
void generatereport(weather w){
    if(w.temp<20)
        strcpy(w.condition,"cool");
    else if(w.temp>=20 && w.temp<35)
        strcpy(w.condition,"pleasant");
    else
        strcpy(w.condition,"very hot");
    cout<<"city name : "<<w.name<<endl;
    cout<<"city temperature : "<<w.temp<<endl;
    cout<<"city condition : "<<w.condition<<endl;
}
int main(){
    char city[30]="puri";
    weather w(37,city);
    generatereport(w);
    return 0 ;
}