#include<iostream>
#include<string>
using namespace std;
class VehicleService {
    string vehicleNumber;
    string ownerName;
    bool serviceDue;
    int lastServiceKilometres;
public:
    VehicleService(string number,string owner,bool due,int km) {
        vehicleNumber = number;
        ownerName = owner;
        serviceDue = due;
        lastServiceKilometres = km;
    }
    friend class ServiceManager;
};
class ServiceManager {
public:
    void displayInfo(VehicleService &v) {
        cout<<endl<<"Vehicle Number: "<<v.vehicleNumber<<endl;
        cout<<"Owner Name: "<<v.ownerName<<endl;
        cout<<"Service Due: "<<(v.serviceDue ? "Yes" : "No")<<endl;
        cout << "Last Service Kilometres: "<<v.lastServiceKilometres<<" km"<<endl;
    }
    void completeService(VehicleService &v) {
        v.serviceDue=false;
        cout << "Service marked as completed."<<endl;
    }
    void updateKilometres(VehicleService &v, int km) {
        v.lastServiceKilometres = km;
        cout<<"Last service kilometres updated."<<endl;
    }
    void checkService(VehicleService &v) {
        if (v.serviceDue)
            cout<<"Vehicle requires servicing."<<endl;
        else
            cout<<"Vehicle does not require servicing."<<endl;
    }
};
int main() {
    VehicleService v("OD02AB1234","Rahul",true,15000);
    ServiceManager m;
    m.displayInfo(v);
    m.checkService(v);
    m.completeService(v);
    m.updateKilometres(v,18000);
    m.checkService(v);
    m.displayInfo(v);
    return 0;
}