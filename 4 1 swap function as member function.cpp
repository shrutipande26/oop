#include <iostream>
using namespace std;

class num {
public:
    int n1, n2;

    void accept() {
        cout << "Enter first number: " << endl;
        cin >> n1;
        cout << "Enter second number: " << endl;
        cin >> n2;
    }

    void display() {
        cout << "Num 1: " << n1 << endl;
        cout << "Num 2: " << n2 << endl;
    }

    void swap(num &x) {
        int temp = x.n1;
        x.n1 = x.n2;
        x.n2 = temp;
        cout << "Swapped: in First number " << x.n1 
             << ", in Second number " << x.n2 << endl;
    }
};

int main() {
    num nu;
    nu.accept();
    nu.display();
    nu.swap(nu);
    nu.display();
    return 0;
}
