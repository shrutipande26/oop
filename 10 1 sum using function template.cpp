#include <iostream>
using namespace std;
template <typename T>
T sumArray(T arr[]) {
    T sum = 0; 
    
    for (int i = 0; i < 10; ++i) {
        sum += arr[i];
    }
    return sum;
}

int main() {

    int intArr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    float floatArr[10] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f, 6.6f, 7.7f, 8.8f, 9.9f, 10.0f};

    int intSum = sumArray(intArr);
    cout << "sum of integer array: " << intSum << endl;

    float floatSum = sumArray(floatArr);
    cout << "sum of float array:   " << floatSum << endl;

    return 0;
}