#include<iostream>
using namespace std;
class sum 
{
    int n, result;
    public:
    sum()
    {
        cout<<"\n enter value of number";
        cin>>n;
        for(int i=0; i<=n;i++)
        {
            result=result+i;
        }
        cout<<"\n the sum is :"<<result;
    }
};
int main()
{
    sum obj;
    return 0;
}