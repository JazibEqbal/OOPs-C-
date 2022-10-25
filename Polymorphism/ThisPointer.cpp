#include <iostream>
using namespace std;

class sample
{
    int a;

public:
    sample()
    {
        a = 30;
    }
    void display(int a)
    {
        cout << "The value of argument a= " << a << endl;
        cout << "The value of data member a= " << this->a << endl;
    }
};

int main()
{
    sample s;
    s.display(20);
    return 0;
}

// The most important advantage of ‘this’ pointer is, If there is same name of argument and data member than you can differentiate it.
// By using ‘this’ pointer we can access the data member and without ‘this’ we can access the argument in same function.