#include <iostream>
using namespace std;

class Sum {
    int n, result;

public:

    Sum() {
        n = 4;
        result = 0;
    }


    Sum(const Sum &obj) {
        n = obj.n;
        result = 0;
        for (int i = 1; i <= n; i++) {
            result += i;
        }
        cout << "Sum is: " << result << endl;
    }
};

int main() {
    Sum s1;       
    Sum s2(s1);   
    return 0;
}
