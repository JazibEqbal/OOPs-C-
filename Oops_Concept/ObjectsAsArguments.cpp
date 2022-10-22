#include <iostream>
using namespace std;

class Time
{
private:
    int hours;
    int minutes;
    int seconds;

public:
    void getTime(void)
    {
        cout << "Enter hour: ";
        cin >> hours;
        cout << "Enter minutes: ";
        cin >> minutes;
        cout << "Enter seconds: ";
        cin >> seconds;
    };
    void puttime(void)
    {
        cout << hours << " hours and ";
        cout << minutes << " minutes and ";
        cout << seconds << " seconds." << endl;
    }
    void addTime(Time, Time);  //declaration with objects as arguments
};

void Time::addTime(Time T1, Time T2)  //T1 and T2 are objects
{

    seconds = T1.seconds + T2.seconds;
    minutes = T1.minutes + T2.minutes + seconds / 60;
    ;
    hours = T1.hours + T2.hours + minutes / 60;
    minutes %= 60;
    seconds %= 60;
}

int main()
{
    Time T1, T2, T3;
    T1.getTime();
    T2.getTime();
    T3.addTime(T1, T2);
    T3.puttime();

    return 0;
}
