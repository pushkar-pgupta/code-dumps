#include<iostream>
using namespace std;
class abc
{
    int a;
    public:
    void read()
    {
        cin>>this->a;
    }
    void disp()
    {
        cout<<a;
    }

};
int main()
{
    abc ob,*ptr;
    ob.read();
    ob.disp();
    return 0;
}