#include<iostream>
using namespace std;

class base1
{
    public:
    base1()
    {
        cout<<"Base 1 Constructor\n";
    }
    ~base1()
    {
        cout<<"Base 1 Destructor\n";
    }
};

class derieved1 : public base1
{
    public:
    derieved1()
    {
        cout<<"Derived1 Constructor\n";
    }
    ~derieved1()
    {
        cout<<"Derived1 Destructor\n";
    }
};

class derieved2 : public derieved1
{
    public:
    derieved2()
    {
        cout<<"Derived2 Constructor\n";
    }
    ~derieved2()
    {
        cout<<"Derived2 Destructor\n";
    }
};

int main()
{
    derieved1 obj;
    return 0;
}
