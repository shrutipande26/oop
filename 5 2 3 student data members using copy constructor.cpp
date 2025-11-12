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
    Student(const Student &obj)
    {
        name=obj.name;
        percentage=obj.percentage;
        cout<<"copy constructor called";
    }


    void display() {
        cout << "name: " << name;
        cout << "\n percentage: " << percentage;
    }
};

int main() {
    Student s;     
    s.display(); 
    Student s2(s);
    s2.display();
    return 0;
}
