#include<iostream>
using namespace std;
class academics
{
    protected:
    int marks=80;
};
class sports
{
    protected:
    int sportsscore=50;
};
class result:protected academics, protected sports
{
    int totalscore=marks+sportsscore;
    public:
    void calculate()
    {
        cout<<"total score is:"<<totalscore;
    }
};
int main()
{
    result r1;
    r1.calculate();
}