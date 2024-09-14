#include<iostream>
using namespace std;
class abc
{
    int a,b;
    public:
    void read();
    void disp();
   friend  abc operator- (abc,abc);

};
void abc :: read()
{
    cout<<"Enter two numbers ";
    cin>>a>>b;
}
void abc :: disp()
{
    cout<<"A and b are \n"<<endl;
    cout<<a <<" " <<b;
}
abc operator- (abc ob1,abc ob2)
{
    abc temp;
    temp.a=ob1.a-ob2.a;//this->a+ob.a; // this pointer or use just a
    temp.b=ob1.b- ob2.b;//this->b+ob.b;
    return temp;
}
int main()
{
    abc ob1,ob2,ob3;
    ob1.read();
    ob2.read();
    ob3 = ob1 - ob2; //ob1.operator+(ob2); // operator+(ob1,ob2)
    ob3.disp();
    return 0;
}