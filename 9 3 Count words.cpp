#include <iostream>
#include <fstream>
#include <ctype.h>
using namespace std;

int main()
{
    fstream new_file;
    new_file.open("first.txt", ios::in);
    if (!new_file) {
        cout << "Error occured!" << endl;
        return 1;
    }

    char ch;
    int word_c = 0;
    bool inword = false;

    while (new_file.get(ch)) {
        if (isspace(ch)) {
            inword = false;
        }
        else if (!inword) {
            word_c++;
            inword = true;
        }
    }

    new_file.close();
    cout << "No. of words: " << word_c << endl;
    return 0;
}
