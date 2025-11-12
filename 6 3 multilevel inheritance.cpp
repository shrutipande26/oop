#include<iostream>
using namespace std;
class vehicle
{
    protected:
    string brand="bmw";
    string model="x1";
};
class car:protected vehicle
{
    protected:
    string type="SUV";
};
class electriccar:protected car
{
    int batterycapacity=80;
    public:
    void display()
    {
        cout<<"\nbrand is :"<<brand;
        cout<<"\nmodel is :"<<model;
        cout<<"\ntype is :"<<type;
        cout<<"\nbattery capacity is :"<<batterycapacity;
    }
};
int main()
{
    electriccar e1;
    e1.display();
    return 0;
}