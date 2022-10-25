#include <iostream>
using namespace std;

class base
{
public:
    virtual void display()
    {
        cout << "BASE" << endl;
    }
};

class derived : public base
{
public:
    void display()
    {
        cout << "Derived" << endl;
    }
};

int main()
{
    base b;
    derived d;
    base *ptr;
    ptr = &d;
    ptr->display();
}

// Base class and derived class have same function name and base class pointer is assigned address of derived class object then also pointer will execute base class function.
// To execute function of derived class, we have to declare function of base class as virtual.