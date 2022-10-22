#include <iostream>
using namespace std;

class A
{
public:
    void displayA()
    {
        cout << "Class A" << endl;
    }
};

class B : public A // Single Inheritance
{
public:
    void displayB()
    {
        cout << "Class B" << endl;
    }
};
class C : public B // Multilevel Inheritance
{
public:
    void displayC()
    {
        cout << "Class C" << endl;
    }
};
class D
{
public:
    void displayD()
    {
        cout << "Class D" << endl;
    }
};
class E : public A, public D // Multiple Inheritance
{
public:
    void displayE()
    {
        cout << "Class E" << endl;
    }
};
class F : public B, public C // Hybrid Inheritance
{
public:
    void displayF()
    {
        cout << "Class F" << endl;
    }
};

int main()
{
    return 0;
}

// hoti pe thi muskaan
// hatton me thi kamyabi
// ab hasti annkhon me tuute hai sapne