#include<iostream>
using namespace std;
class A
{
    public:
    //int a;
     static int a;
    //void disp() {
       // cout<<a;
    //}
};
int A::a;
//ob1;

int main()
{
    
    //cout<<a;
    cout<<A::a;
    //A ob1;
    //ob1.disp();
    return 0;
}