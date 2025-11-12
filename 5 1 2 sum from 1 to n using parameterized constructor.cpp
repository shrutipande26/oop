#include <iostream>
using namespace std;

class Sum {
    int n, result;
public:

    Sum(int num) {
        result = 0;
        for (int i = 1; i <= num; i++) {
            result += i;
        }

        cout << "sum is :" << result << endl;
    }
};

int main() {
    int n;
    cout << "enter the value of n: ";
    cin >> n;

    Sum obj(n);

    return 0;
}
