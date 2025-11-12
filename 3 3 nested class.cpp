#include <iostream>
using namespace std;

class student {
public:
    class marks {
        int marks;
    public:
        void accept() {
            cout << "Enter the marks for the student ";
            cin >> marks;
        }

        void display() {
            cout << "The marks are: " << marks << endl;
        }
    };
};

int main() {
    student::marks m1;
    m1.accept();
    m1.display();
    return 0;
}
