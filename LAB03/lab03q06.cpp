#include<iostream>
using namespace std;
class book{
    int id,quantity;
    float price;
    char name[30];
    public:
        void getdata(){
            cout<<"enter product ID : ";
            cin>>id;
            cout<<"enter product name : ";
            cin>>name;
            cout<<"enter price : ";
            cin>>price;
            cout<<"enter quantity : ";
            cin>>quantity;
        }
        int totalcost(){
            return price*quantity;
        }
        void display(){
            cout<<endl<<"product id : "<<id<<endl;
            cout<<"product name : "<<name<<endl;
            cout<<"product price : "<<price<<endl;
            cout<<"quantity : "<<quantity<<endl;
            cout<<"total cost :"<<totalcost()<<endl;
        }
};
int main(){
    int n;
    cout<<"enter number of products : ";
    cin>>n;
    book *b = new book[n];
    for(int i=0;i<n;i++){
        cout<<"enter "<<i<<" product details"<<endl;
        b[i].getdata();
        cout<<endl;
    }
    cout<<endl<<"product details"<<endl;
    for(int i=0;i<n;i++){
        b[i].totalcost();
        b[i].display();
    }
    delete[] b;
    b = nullptr;
    return 0;
}