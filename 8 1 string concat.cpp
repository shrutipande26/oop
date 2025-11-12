#include <iostream>
#include <cstring>

using namespace std;

class String {
private:
    char str[50];

public:
    void accept() {
        cout << "Enter a string: ";
        cin >> str;
    }

    void display() {
        cout << str << endl;
    }

    void operator+(String s2) {
        strcat(this->str, s2.str);
    }
};

int main() {
    String s1, s2;

    s1.accept();
    s2.accept();

    s1 + s2;

    cout << "\n--- After Concatenation ---" << endl;
    cout << "First string (s1) is now: ";
    s1.display();

    cout << "Second string (s2) is still: ";
    s2.display();

    return 0;
}