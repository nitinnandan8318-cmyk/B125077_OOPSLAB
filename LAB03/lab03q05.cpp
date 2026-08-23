#include<iostream>
using namespace std;
class book{
    int id;
    float price;
    char author[30],title[30];
    public:
        void getdata(){
            cout<<"enter book title : ";
            cin>>title;
            cout<<"enter book author name : ";
            cin>>author;
            cout<<"enter book ID : ";
            cin>>id;
            cout<<"enter book price : ";
            cin>>price;
        }
        void display(){
            cout<<endl<<"book title : "<<title<<endl;
            cout<<"author name : "<<author<<endl;
            cout<<"book ID : "<<id<<endl;
            cout<<"book price : "<<price<<endl;
        }
};
int main(){
    book *b = new book;
    b->getdata();
    b->display();
    delete b;
    b = nullptr;
}