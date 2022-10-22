#include <iostream>
using namespace std;

class add
{
public:
    void fun(int a, int b)
    {
        cout << "sum = " << a + b << endl;
    }
    void fun(float a, float b)
    {
        cout << "sum = " << a + b << endl;
    }
    void fun(int a, int b, int c)
    {
        cout << "sum = " << a + b + c << endl;
    }
};

int main()
{
    add a;
    a.fun(2, 3);
    a.fun(23, 30.30);
    a.fun(2, 2, 1);
    return 0;
}