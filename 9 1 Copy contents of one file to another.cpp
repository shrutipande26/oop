#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream first_file, second_file;
    first_file.open("first.txt", ios::in);
    if (!first_file) {
        cout << "Error opening first.txt!";
        return 1;
    }

    second_file.open("second.txt", ios::out);
    if (!second_file) {
        cout << "Error opening second.txt!";
        return 1;
    }

    char ch;
    while (first_file.get(ch)) {
        second_file.put(ch);
    }

    first_file.close();
    second_file.close();

    cout << "File copied successfully!";
    return 0;
}
