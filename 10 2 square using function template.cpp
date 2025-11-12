#include<iostream>
#include<string.h>
using namespace std;
template<typename T>
T square(T val)
{
    T sq=val*val;
    cout<<sq;
    return sq;
}
template<>
string square(string sqvalue)
{
    string squaree=sqvalue+sqvalue;
    cout<<squaree;
    return squaree;
}
int main()
{
    int A=5;
    string B="abc";
    square(A);
    
    square(B);
    return 0;
}