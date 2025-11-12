#include <iostream>
using namespace std; 
class student
{
    int roll_no;
    string name;
    public:
    void accept()
    {
        cout<<"enter student name and roll no.";
        cin>>name>>roll_no;
    }
    void disp()
    {
        cout<<"Name of student :"<<name;
        cout<<" \n Roll no. :"<<roll_no;
    }

};
int main()
{
    student s1;
    s1.accept();
    s1.disp();
    return 0;
}
