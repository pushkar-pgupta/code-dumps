#include<iostream>
#include<new>
using namespace std;
class abc
{
    int a;
    int b;
    public:
    void read();
    void disp();
    abc(int x,int y)
    {
        //cout<<"Constructor called"<<endl;
        a=x;
        b=y;
    }

};
// void abc::read()
// {
//     cout<<"Enter"<<endl;
//     cin>>a>>b;
// }
void abc::disp()
{
    cout<<"Entered"<<endl;
    cout<<a<<endl<<b<<endl;

}

int main()
{
    abc *ptr;
    ptr= new abc(5,2);
   // ptr= new abc[2];
   // ptr->read();
    ptr->disp();
   // (ptr+1)->read();
   // (ptr+1)->disp();
    return 0;
}