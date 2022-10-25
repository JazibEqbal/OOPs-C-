#include<iostream>
using namespace std;

class base{
     public:
     int b;
     void show(){
        cout<<"The value of b is "<<b<<endl;
     }
};
class derived : public base{
     public: 
     int d;
     void show(){
        cout<<"The value of d is "<<d<<endl;
     }
};

int main(){
    base B;      //object creation
    derived D;
    base *ptr;   
    ptr=&B;
    cout<<"Base class pointer assign address of base class object"<<endl;
    ptr->b =100;
    ptr->show();
    ptr=&D;
    ptr->b=200;
    cout<<"Base class pointer assign address of derived class object"<<endl;
    ptr->show();
    derived *der;
    der = &D;
    cout<<"Derived class pointer assign address of derived class object"<<endl;
    der->d=300;
    der->show();
    return 0;
}