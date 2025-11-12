#include <iostream>
#include <fstream>
#include <ctype.h>
using namespace std;

int main()
{
    fstream new_file;
    new_file.open("first.txt", ios::in);
    if (!new_file) {
        cout << "Error opening first file!";
        return 1;
    }

    int dig_c = 0;
    int spc_c = 0;
    char ch;

    while (new_file.get(ch)) {
        if (isdigit(ch)) {
            dig_c++;
        }
        else if (isspace(ch)) {
            spc_c++;
        }
    }

    new_file.close();
    cout << "No. of digits: " << dig_c << endl << "No. of spaces: " << spc_c << endl;
    return 0;
}
