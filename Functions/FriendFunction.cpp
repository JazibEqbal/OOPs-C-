#include <iostream>
using namespace std;

class numbers
{
    int num1, num2;

public:
    void setdata(int a, int b);
    friend int add(numbers N); // declarartion
};

void numbers::setdata(int a, int b)
{
    num1 = a;
    num2 = b;
}
int add(numbers N)
{
    return (N.num1 + N.num2);
}

int main()
{
    numbers n;
    n.setdata(10, 20);
    cout << "Sum = " << add(n) << endl; // passing object as an argument
    return 0;
}
// friend func cannot access members name directly