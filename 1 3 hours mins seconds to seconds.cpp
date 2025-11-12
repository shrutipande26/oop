#include <iostream>
using namespace std;

class time
{
    public:
    int hour, min, sec;

    void accept()
    {
        cout << "Enter time in hours, minutes, and seconds: ";
        cin >> hour >> min >> sec;
    }

    void disp()
    {
        int s1 = (hour * 3600) + (min * 60) + sec;
        cout << "The time in seconds is: " << s1 << endl;
    }
};

int main()
{
    class time t1;
    t1.accept();
    t1.disp();
}
