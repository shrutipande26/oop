#include<iostream>
using namespace std;
class calculatearea
{
    public:
    void area(int l, int b)
    {
        cout<<"\narea of lab is :"<<l*b;
    }
    void area(int s)
    {
        cout<<"\narea of class is :"<<s*s;
    }
};
int main()
{
    calculatearea A;
    int l, b, side;
    cout<<"enter l, b, side \n";
    cin>>l>>b>>side;
    A.area(l, b);
    A.area(side);
    return 0;
}