#include<iostream>
using namespace std;
class abc
{
    int a,b;
    public:
    void read();
    void disp();
    abc operator++();
    abc operator+(abc);

};
void abc :: read()
{
    cout<<"Enter a and b\n";
    cin>>a>>b;

}
void abc :: disp()
{
    cout<<"A and B are:\n";
    cout<<a<<b;

}
abc abc:: operator+(abc ob)
{
    abc temp;
    temp.a=a+ob.a;
    temp.b=b+ob.b;
    retur temp;

}
abc abc :: operator++()
{
    abc temp;
    temp.a=++a;
    temp.b=++b;
    return temp;

}
int main()
{
    abc ob1,ob2,ob3;
    ob1.read();
    ob2.read();
    ob3=++ob1 + ob2;
    ob3.disp();
    return 0;
}