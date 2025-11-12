#include <iostream>
using namespace std;

class num {
    int n1, n2;

public:
    void accept() {
        cout << "Enter first number: ";
        cin >> n1;
        cout << "Enter second number: ";
        cin >> n2;
    }

    void display() {
        cout << "Num 1: " << n1 << endl;
        cout << "Num 2: " << n2 << endl;
    }


    friend void swapNumbers(num &obj);
};


void swapNumbers(num &obj) {
    int temp = obj.n1;
    obj.n1 = obj.n2;
    obj.n2 = temp;
    cout << "Numbers swapped successfully!\n";
}

int main() {
    num obj;
    obj.accept();
    obj.display();
    swapNumbers(obj);
    obj.display();
    return 0;
}
