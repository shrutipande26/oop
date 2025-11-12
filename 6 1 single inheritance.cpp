#include<iostream>
using namespace std;
class person 
{
    protected:
    string name="shreyash";
    int age=17;
};
class student:protected person 
{
    int roll=21;
    public:
    void display()
    {
        cout<<"roll no is :"<<roll<<"\nname is :"<<name<<"\nage is :"<<age;
    }
};
int main()
{
    student s1;
    s1.display();
    return 0;
}