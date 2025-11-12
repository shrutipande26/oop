#include<iostream>
using namespace std;
class college
{
    int roll;
    string name, course;
    public:
    college(int roll,string name,string course="poly")
    {
        int r=roll;
        string n=name;
        string c=course;
        cout<<r<<n<<c;
        
    }

};
int main()
{
    college c1(1,"shreyash");
    return 0;
}