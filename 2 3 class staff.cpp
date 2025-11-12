#include <iostream>
#include <string> 

using namespace std;

class staff {
public:
    string name;
    string post;

    void accept() {
        cout << "Enter staff name: ";
        cin >> name;
        cout << "Enter staff post: ";
        cin >> post;
    }
};

int main() {
    staff staffArray[5];
    
    cout << "Enter details of 5 staff members:\n";
    
    for (int i = 0; i < 5; i++) {
        cout << "\nStaff " << i + 1 << "\n";
        staffArray[i].accept();
    }

    cout << "\nStaff members who are HOD:\n";
    
    for (int i = 0; i < 5; i++) {
        if (staffArray[i].post == "HOD") {
            cout << staffArray[i].name << endl;
        }
    }
    
    return 0;
}
