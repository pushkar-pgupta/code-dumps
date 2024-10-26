#include<iostream>
using namespace std;
class A
{
    static int a; //declaration 
    public:  
    void read()
    {
    cin>>a;

    }
    void disp()
    {
        cout<<a;
    }
};
int A::a; // definition
int main()
{
    A ob1,ob2;
    ob1.read();
    ob2.disp();
    return 0;
}