#include <iostream>

using namespace std;

class account {
public:
    int accountno;
    float balance;

    void accept() {
        cout << "Enter account no. : ";
        cin >> accountno;
        cout << "Enter balance : ";
        cin >> balance;
    }

    void display() {
        cout << "Acc no. " << accountno << " Balance : " << balance << endl;
    }
};

int main() {
    account acc[10];
    
    cout << "Enter details for 10 accounts\n";
    
    for (int i = 0; i < 10; i++) {
        cout << "\nAccount " << i + 1 << ":\n";
        acc[i].accept();
    }

    for (int i = 0; i < 10; i++) {
        if (acc[i].balance > 5000) {
            acc[i].balance += acc[i].balance * 0.1f;
        }
    }

    cout << "\nUpdated account details:\n";
    
    for (int i = 0; i < 10; i++) {
        acc[i].display();
    }
    
    return 0;
}
