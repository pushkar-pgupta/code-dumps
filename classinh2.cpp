#include<iostream>
using namespace std;
class base
{
    public:
    base()
    {
        cout<<"base"<<endl;

    }
    ~base()
    {
        cout<<"Destructor"<<endl;
    }
};
class derived: public base 
{
    int b;
    public:
    derived(int x)
    {
        b=x;
        cout<<x<<endl;
    }
    ~derived()
    {
        cout<<"Destrcuctor derieved"<<endl;
        //cout<<x<<endl; (gives an error due to the scope limitations of x)
    }
};
derived c(3);

int main()
{
    derived a(1);// ( {} gives a differeent output)
    
    derived b(2);
    //derived a(1),b(2);
    return 0;
}