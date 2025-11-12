#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> lst;
    int i;

    for (i = 0; i < 10; i++)
        lst.push_back(i);

    cout << "Size of list: " << lst.size() << endl;

    cout << "Contents: ";
    list<int>::iterator p;
    for (p = lst.begin(); p != lst.end(); ++p)
        cout << *p << " ";

    cout << "\n";


    for (p = lst.begin(); p != lst.end(); ++p)
        *p = *p + 100;

    cout << "Modified contents: ";
    for (p = lst.begin(); p != lst.end(); ++p)
        cout << *p << " ";

    cout << endl;

    return 0;
}
