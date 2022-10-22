#include <iostream>
using namespace std;

class employee
{
    char name[10]; // data member
    int id;

public:
    void getdata(); // prototype declaration
    void putdata();
};

void employee::getdata() // member function
{
    cout << "Enter name and id ";
    cin >> name >> id;
}
void employee::putdata()
{
    cout << name << " " << id << endl;
}

int main()
{
    employee e;  // object creation
    e.getdata(); // function calling
    e.putdata();
    return 0;
}
