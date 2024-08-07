#include<iostream>
using namespace std;
class abc
{
    public:
    int a;

};
int main()
{
    abc ob,*ptr;
    ob.a=5;
    ptr=&ob;
    cout<<ptr->a;
    return 0;
}