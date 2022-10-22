#include <iostream>
using namespace std;

void swap(int a, int b) // passing by value
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x, y;
    cout << "Enter value of a and b: " << endl;
    cin >> x;
    cin >> y;
    swap(x, y);
    cout << "Value after swapping original value does not change i.e; "
         << "a =" << x << " b =" << y << endl;
    return 0;
}