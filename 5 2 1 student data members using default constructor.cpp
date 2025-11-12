#include <iostream>
using namespace std;

class Student {
    string name;
    float percentage;

public:

    Student() {
        name="shreyash";
        percentage=99;
    }


    void display() {
        cout << "name: " << name;
        cout << "\n percentage: " << percentage;
    }
};

int main() {
    Student s;     
    s.display(); 
    return 0;
}
