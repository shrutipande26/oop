#include <iostream>
using namespace std;

template <class T>
class Stack {
    T stack[100];   
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(T value) {
        if (top == 99) {
            cout << "Stack Overflow!" << endl;
        } else {
            top++;
            stack[top] = value;
            cout << value << " pushed into stack." << endl;
        }
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow!" << endl;
        } else {
            cout << stack[top] << " popped from stack." << endl;
            top--;
        }
    }

    void display() {
        if (top == -1) {
            cout << "Stack is empty!" << endl;
        } else {
            cout << "Stack elements: ";
            for (int i = top; i >= 0; i--)
                cout << stack[i] << " ";
            cout << endl;
        }
    }
};

int main() {
    Stack<int> s; 
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    s.pop();
    s.display();

    return 0;
}