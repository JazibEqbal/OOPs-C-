#include <iostream>
using namespace std;

class Unary
{
private:
    int a, b;

public:
    void getdata()
    {
        a = 10;
        b = 20;
    }
    void operator-() // Unary Member Function
    {
        a = a - 5;
        b = b - 5;
    }
    void display()
    {
        cout << "The value of a=" << a << endl;
        cout << "The value of b=" << b << endl;
    }
};

int main()
{
    Unary u;
    u.getdata();
    -u; // Call Unary Member Function
    u.display();
    return 0;
}