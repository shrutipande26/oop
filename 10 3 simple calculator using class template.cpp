#include <iostream>
using namespace std;

template <class T>
class C
{
    T num1, num2;

public:
    C() { num1 = 0; num2 = 0; }

    void accept()
    {
        cout << "Enter numbers: ";
        cin >> num1 >> num2;
    }

    void add()
    {
        cout << "Sum: " << num1 + num2 << endl;
    }

    void sub()
    {
        cout << "Sub: " << num1 - num2 << endl;
    }

    void mul()
    {
        cout << "Mult: " << num1 * num2 << endl;
    }

    void div()
    {
        if (num2 != 0)
            cout << "Div: " << num1 / num2 << endl;
        else
            cout << "Division by zero not allowed!" << endl;
    }
};

int main()
{
    C<int> obj;
    obj.accept();
    obj.add();
    obj.sub();
    obj.mul();
    obj.div();
    return 0;
}
