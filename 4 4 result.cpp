#include <iostream>
using namespace std;

class Result2; // Forward declaration

class Result1 {
private:
    int r1;
public:
    void accept() {
        cout << "Enter first result: ";
        cin >> r1;
    }
    friend float avg(Result1, Result2); // Declare friend
};

class Result2 {
private:
    int r2;
public:
    void accept() {
        cout << "Enter second result: ";
        cin >> r2;
    }
    friend float avg(Result1, Result2); // Declare friend
};

// Friend function to compute average
float avg(Result1 res1, Result2 res2) {
    return (res1.r1 + res2.r2) / 2.0f;
}

int main() {
    Result1 res1;
    Result2 res2;

    res1.accept();
    res2.accept();

    float average = avg(res1, res2);
    cout << "The average is: " << average << endl;

    return 0;
}
