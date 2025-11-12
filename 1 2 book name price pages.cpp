#include<iostream>
using namespace std;
class classbook
{
    public:
    int Bprice, Bpages;
    string Bname;
    public:
    void accept()
    {
        cout<<"enter book name, price and pages";
        cin>>Bname>>Bprice>>Bpages;
    }
    void disp()
    {
        cout<<"The name of the most expensive book is "<<Bname;
    }
};
int main()
{
    classbook b1, b2;
    b1.accept();
    b2.accept();
    if(b1.Bprice>b2.Bprice)
    {
        b1.disp();
    }
    else{
        b2.disp();
    }
    return 0;
}
