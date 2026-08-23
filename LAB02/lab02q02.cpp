#include<iostream>
using namespace std;
class square{
    int length;
    public:
        void getdata(){
            cout<<"enter length of a square:";
            cin>>length;
        }
        int area(){
            return length*length;
        }
        int perimeter(){
            return 4*length;
        }
};
int main(){
    square s;
    s.getdata();
    cout<<"area of a square :"<<s.area()<<endl;
    cout<<"perimeter of a square:"<<s.perimeter()<<endl;
    return 0;
}