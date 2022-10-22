#include <bits/stdc++.h>
using namespace std;

class Vector
{
private:
    int size;
    int *cordinates;

public:
    Vector()
    {
        cout << "Enter number of co-ordinates:" << endl;
        cin >> size;
        cordinates = new int[size];
        cout << "Enter " << size << " co-ordinates:" << endl;
        for (int i = 0; i < size; i++)
        {
            cin >> cordinates[i];
        }
    }
    void modify()
    {
        cout << "Enter " << size << " new co-ordinates" << endl;
        for (int i = 0; i < size; i++)
        {
            cin >> cordinates[i];
        }
    }
    void multiply()
    {
        cout << "Enter number to multiply co-ordinates: " << endl;
        int num;
        cin >> num;
        for (int i = 0; i < size; i++)
        {
            cordinates[i] = cordinates[i] * num;
        }
    }
    void display()
    {
        cout << "Vector is: ";
        for (int i = 0; i < size; i++)
        {
            cout << cordinates[i];
            if (i != size - 1)
            {
                cout << ",";
            }
        }
        cout << endl;
    }
    ~Vector() {}
};

int main()
{
    Vector v;
    // v.display();
    // v.modify();
    // v.display();
    v.multiply();
    v.display();
    return 0;
}