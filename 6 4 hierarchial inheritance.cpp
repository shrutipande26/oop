#include<iostream>
using namespace std;
class employee
{
    protected:
    int empID=5;
    string name="shreyash";
};
class manager:protected employee
{
    string dept="poly";
    public:
    void display()
    {
        cout<<"\nemp id is :"<<empID;
        cout<<"\nname is :"<<name;
        cout<<"\n department name is :"<<dept;
    }
};
class developer:protected employee
{
    string programminglanguage="cpp";
    public:
    void display()
    {
        cout<<"\nemp id is :"<<empID;
        cout<<"\nname is :"<<name;
        cout<<"\n programming language is :"<<programminglanguage;
    }
};
int main()
{
    manager m1;
    developer d1;
    m1.display();
    d1.display();
    return 0;
}