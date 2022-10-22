#include <iostream>
using namespace std;

class rectangle
{
    int length, width;

public:
    rectangle() // Default constructor
    {
        length = 0;
        width = 0;
    }
    rectangle(int _length, int _width) // Parameterized constructor
    {
        length = _length;
        width = _width;
    }
    rectangle(rectangle &r) // Copy constructor
    {
        length = r.length;
        width = r.width;
    }
};

int main()
{
    rectangle r1;
    rectangle r2(10, 10);
    rectangle r3(r2);
    return 0;
}