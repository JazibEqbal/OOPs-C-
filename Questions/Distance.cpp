#include <bits/stdc++.h>
using namespace std;

class Staff
{
    int id;
    string name;
    float salary;

public:
    void accept()
    {
        cout << "Enter staff id: ";
        cin >> id;
        cout << "Enter staff name: ";
        cin >> name;
        cout << "Enter salary: ";
        cin >> salary;
    }
    void display();
};

int main()
{

    return 0;
}