#include <iostream> 
#include <queue>    
using namespace std;

int main()
{
    queue<int> age;
    age.push(21);
    age.push(22);
    age.push(23);
    age.push(24);
    
    cout << "Front element is: " << age.front() << endl;
    cout << "Back element is: " << age.back() << endl;
    
    age.pop();
    age.pop();
    
    cout << "Element in queue are: \n";
    while(!age.empty())
    {
        cout << age.front() << endl;
        age.pop();
    }
    return 0;
}