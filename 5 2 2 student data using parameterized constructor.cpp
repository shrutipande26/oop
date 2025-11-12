#include<iostream>
using namespace std;
class student
{
    float per;
    string name;
    public:
    student(float p, string n)
    {
        per=p;
        name=n;
    }
    void disp()
    {
        cout<<"perentage ="<<per;
        cout<<"\n name="<<name;
    }
};
int main()
{
    student s1(99,"shreyash");
    s1.disp();
    return 0;
}