#include<iostream>
#include<new>
using namespace std;
class a
{
    int *ptr; // * removed
    public:
    a()
    {
        ptr = new int;
        cout<<"contructor called"<<endl;

    }
    a (const a &ob)
    {
        ptr = new int;
        cout<<"Copy constructor"<<endl;
    }
    void disp()
    {
        cout<<ptr<<endl; //this replace ptr

    }
};
int main()
{
     a ob1,ob2;
     ob2=ob1;
   // a ob1,ob2=ob1;// if we dont declare a copy constructor(by the user) and yet use this thype of statement the compiler proves its own default copy constructor.
   // a ob1,ob2;
    ob1.disp();
    ob2.disp();  
    return 0;
}