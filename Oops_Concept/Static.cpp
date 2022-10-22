#include <bits/stdc++.h>
using namespace std;

class item
{
    int number;
    static int count; // declaring static variable

public:
    void getdata(int a)
    {
        number = a;
        count++;
    }
    static void getcount() // static member function
    {
        cout << "Value of count: " << count << endl;
    }
};
int item::count; // defining static variable (must be outside the class)

int main()
{
    item a, b, c;
    a.getdata(100);
    b.getdata(200);
    c.getdata(700);
    a.getcount();
    b.getcount();
    c.getcount();
    return 0;
}