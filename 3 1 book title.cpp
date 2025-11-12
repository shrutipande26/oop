#include <iostream>
using namespace std;
class book{
    public: 
    string title;
    string author; 
    float price;
    void accept()
    {
        cout<<"enter book title (one word)";
        cin>>title;
        cout<<"enter author name (one word)";
        cin>>author;
        cout<<"enter price";
        cin>>price;
    }
    void display()
    {
        cout<<"\n book title "<<title;
        cout<<"\n author name "<<author;
        cout<<"\n price"<<price;

    }
};
int main()
{
    book* ptr=new book;
    ptr->accept();
    ptr->display();
    delete ptr;
    return 0;
}
