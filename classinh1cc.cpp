#include<iostream>
using namespace std;

class base1
{
    public:
    base1(int x)
    {
        cout<<"x\n";
    }
    ~base1()
    {
        cout<<"Base 1 Destructor\n";
    }
};

class base2
{
    public:
    base2(int x)
    {
        cout<<"x\n";
    }
    ~base2()
    {
        cout<<"base2 Destructor\n";
    }
};

class derieved2 : public base2,base1
{
    public:
    derieved2(int x)
    {
        cout<<"x\n";
    }
    ~derieved2()
    {
        cout<<"Derived2 Destructor\n";
    }
};


int main()
{
    derieved2 obj1;
    
    derieved2 obj2;
        
    
    return 0;
}
