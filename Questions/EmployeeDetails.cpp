#include <bits/stdc++.h>
using namespace std;

class Employee
{
private:
    int id;
    string name;
    float basicSalaray, hra, da, netSalary, tax;

public:
    void display()
    {
        cout << "Employee Id is: " << id << endl;
        cout << "Employee Name is: " << name << endl;
        cout << "Basic salary is: " << basicSalaray << endl;
        cout << "Hra is: " << hra << endl;
        cout << "DA is: " << da << endl;
        cout << "Tax deduction is: " << tax << endl;
        cout << "Net Salary is: " << netSalary;
    }
    void accept()
    {
        cout << "Enter Employee Id : ";
        cin >> id;
        cout << "Enter Employee Name : ";
        getline(cin >> ws, name);
        cout << "Enter Basic Salary : ";
        cin >> basicSalaray;

        hra = 800;
        da = 0.25 * basicSalaray;
        tax = 0.15 * basicSalaray;
        netSalary = basicSalaray + da + hra - tax;
    }
};

int main()
{
    Employee e;
    e.accept();
    e.display();
    return 0;
}
