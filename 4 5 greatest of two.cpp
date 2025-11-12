#include <iostream>
using namespace std;

class Number2; // Forward declaration

class Number1 {
private:
    int n1;
public:
    void accept() {
        cout << "Enter first number: ";
        cin >> n1;
    }
    friend void greatest(Number1, Number2); // 
    Declare friend
};

class Number2 {
private:
    int n2;
public:
    void accept() {
        cout << "Enter second number: ";
        cin >> n2;
    }
    friend void greatest(Number1, Number2); // Declare friend
};

// Friend function to find greatest number
void greatest(Number1 num1, Number2 num2) {
    if (num1.n1 > num2.n2) {
        cout << "The greatest number is: " << num1.n1 << endl;
    } else if (num2.n2 > num1.n1) {
        cout << "The greatest number is: " << num2.n2 << endl;
    } else {
        cout << "Both numbers are equal." << endl;
    }
}

int main() {
    Number1 num1;
    Number2 num2;

    num1.accept();
    num2.accept();

    greatest(num1, num2);

    return 0;
}
