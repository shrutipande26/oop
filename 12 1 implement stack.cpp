#include <iostream> 
#include <stack>    
#include <string>   
using namespace std;

int main()
{
    stack<string> cars;
    cars.push("BMW");
    cars.push("Audi");
    cars.push("Mercedes");
    cars.push("Ferrari");
    
    cout << "Top element is: " << cars.top() << endl;
    cout << "Size of stack is: " << cars.size() << endl;
    
    cars.pop();
    
    cout << "Elements in stack are: \n";
    while(!cars.empty())
    {
        cout << cars.top() << endl;
        cars.pop();
    }
    return 0;
}