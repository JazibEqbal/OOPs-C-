#include <iostream>
using namespace std;

class A
{
public:
    void display()
    {
        cout << "Class A " << endl;
    }
};
class B : public A
{
public:
    void display() // overrides the display() function of class A
    {
        cout << "B Overides class A" << endl;
    }
};

int main()
{
    B b;
    b.display(); // method of class B invokes, instead of class A
    return 0;
}