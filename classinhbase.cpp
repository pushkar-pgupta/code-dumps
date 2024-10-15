#include<iostream>
using namespace std;
class a 
{
    public :
    int a=0;
    // a(int x)
    // {
    //     a=x;

    // }

    
    
};
class b :  virtual public a
{
    // public:
    // int b=1;
    //  b(int y,int z): a(z)
    // {
    //     b=y;
    // }
};
class c : virtual public a
{

};
class d: public b, public c
{

};
int main()
{
   d obj;
   cout<<obj.a; // b *ptr;
    // b obj;
    // ptr = &obj;
    // cout<<ptr->b;  
    return 0;
}