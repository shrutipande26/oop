#include<iostream>
using namespace std;
class sumover{
    int num,sum=0;
    float fnum,fsum=0.0;
    public:
    void sumint(int){
        
        for(int i=0;i<10;i++){
            cout<<"enter the integer";
            cin>>num;
            sum=sum+num;
        }
        cout<<sum<<"\n";

    }
    void sumint(float){
        
        for(int i=0;i<5;i++){
            cout<<"enter the float";
            cin>>fnum;
            fsum=fsum+fnum;
        }
        cout<<fsum;
    }
};

int main(){
    sumover s;
    s.sumint(0);
    s.sumint(0.0f);
    return 0;
}