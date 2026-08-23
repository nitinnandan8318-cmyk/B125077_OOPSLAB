#include<iostream>
#include<string>
using namespace std;
class DigitalWallet {
    string userName;
    double walletBalance;
    bool walletStatus;
public:
    DigitalWallet(string name, double balance, bool status) {
        userName = name;
        walletBalance = balance;
        walletStatus = status;
    }
    friend class WalletManager;
};
class WalletManager {
public:
    void displayWallet(DigitalWallet &w) {
        cout<<endl<<"User Name: "<<w.userName<<endl;
        cout<<"Wallet Balance: "<<w.walletBalance<<endl;
        cout<<"Wallet Status: "<<(w.walletStatus ? "Active" : "Disabled")<<endl;
    }
    void addMoney(DigitalWallet &w, double amount) {
        if (w.walletStatus) {
            w.walletBalance += amount;
            cout<<amount<<" added successfully."<<endl;
        }else{
            cout<<"Wallet is disabled."<<endl;
        }
    }
    void deductMoney(DigitalWallet &w, double amount) {
        if (!w.walletStatus) {
            cout<<"Wallet is disabled."<<endl;
            return;
        }
        if(w.walletBalance >= amount){
            w.walletBalance -= amount;
            cout<<amount<<" deducted successfully."<<endl;
        } else {
            cout<<"Insufficient balance."<<endl;
        }
    }
    void disableWallet(DigitalWallet &w) {
        w.walletStatus = false;
        cout<<"Wallet disabled."<<endl;
    }
    void displayStatus(DigitalWallet &w) {
        cout<<"Wallet Status: "<<(w.walletStatus ? "Active" : "Disabled")<<endl;
    }
};
int main() {
    DigitalWallet w("rahul",5000,true);
    WalletManager m;
    m.displayWallet(w);
    m.addMoney(w,2000);
    m.deductMoney(w,1500);
    m.displayWallet(w);
    m.disableWallet(w);
    m.displayStatus(w);
    return 0;
}