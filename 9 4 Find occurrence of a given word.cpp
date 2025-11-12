#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    fstream new_file;
    new_file.open("first.txt", ios::in);
    if (!new_file) {
        cout << "Error in opening first.txt!";
        return 1;
    }

    string target = "Manas";
    string word;
    int count = 0;

    while (new_file >> word) {
        if (word == target) {
            count++;
        }
    }

    new_file.close();
    cout << "The word: " << target << " occured " << count << " times" << endl;
    return 0;
}
