#include <iostream>
using namespace std;

class student
{
    int roll_no;
    float percentage;

public:
    void accept()
    {
        cout << "Enter your roll no: ";
        cin >> roll_no;
        cout << "Enter your percentage: ";
        cin >> percentage;
    }

    void display()
    {
        cout << "Roll no = " << this->roll_no << endl;
        cout << "Percentage = " << this->percentage << endl;
    }
};

int main()
{
    student s1;
    s1.accept();
    s1.display();
    return 0;
}
