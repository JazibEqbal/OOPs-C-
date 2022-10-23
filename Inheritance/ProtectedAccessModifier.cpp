#include <iostream>
using namespace std;

class A{
    protected:
    int a;
    public:
    void getdata(){
        cout<<"Enter value of a: ";
        cin>>a;
    }
};

class B:public A{
    public:
    void show(){
        cout<<"Value of a is: "<<a<<endl;
    }
};

int main()
{
    B x;
    x.getdata();
    x.show();
    return 0;
}