#include <iostream>
using namespace std;

void swap(int &a, int &b) // passing by reference
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a, b;
    cout << "Enter two numbers: " << endl;
    cin >> a;
    cin >> b;
    swap(a, b);
    cout << "Original value changes i.e; "
         << "a =" << a << " b =" << b << endl;
    return 0;
}