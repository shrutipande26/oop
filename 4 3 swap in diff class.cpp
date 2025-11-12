#include <iostream>
using namespace std;

class num2; // Forward declaration

class num1 {
    int n1;
public:
    void accept() {
        cout << "Enter first number: ";
        cin >> n1;
    }
    void display() {
        cout << "Num 1: " << n1 << endl;
    }
    friend void swapNumbers(num1 &a, num2 &b);
};

class num2 {
    int n2;
public:
    void accept() {
        cout << "Enter second number: ";
        cin >> n2;
    }
    void display() {
        cout << "Num 2: " << n2 << endl;
    }
    friend void swapNumbers(num1 &a, num2 &b);
};

void swapNumbers(num1 &a, num2 &b) {
    int temp = a.n1;
    a.n1 = b.n2;
    b.n2 = temp;
    cout << "Numbers swapped successfully!" << endl;
}

int main() {
    num1 obj1;
    num2 obj2;

    obj1.accept();
    obj2.accept();

    cout << "\nBefore swapping:\n";
    obj1.display();
    obj2.display();

    swapNumbers(obj1, obj2);

    cout << "\nAfter swapping:\n";
    obj1.display();
    obj2.display();

    return 0;
}
