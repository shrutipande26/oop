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
    protected:
    int academicsmarks=90;
};
class sports
{
    protected:
    int sportsscore=50;
};
class academics
{
    protected:
    string grade="A";
};
class result:protected student, protected sports, protected academics 
{
    int totalscore=sportsscore+academicsmarks;
    public:
    void calculate()
    {
        cout<<"totalscore is :"<<totalscore<<" \ngrade is :"<<grade;
    }
};
int main()
{
    result r1;
    r1.calculate();
    return 0;
}