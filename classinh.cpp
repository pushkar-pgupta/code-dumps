#include<iostream>
using namespace std;
class abc
{
    private :
    int a;
    protected:
    int b;
    public:
    int c;

};
class xyz:private abc //protected is inaccesible
{
    private :
    int x;
    protected:
    int y;
    public:
    int z;
    void disp()
    {
        x=5; // can be replaced with z or y will work the same
        cout<<x<<endl; // z,y was here previously will work the same // a will not be accessed 
        //members whch are private will remain inaccessable inside the derived class
    }
};


int main()
{
   xyz ob;
   ob.c=5;
   cout<<ob.c;
  // ob.disp();
//    ob.a=5;
//    cout<<ob.a;
   //ob.disp();
 //  ob.z=5;
  // ob.x=5;
  // cout<<ob.x; // will sohow private error
   //ob.y=5;
  // cout<<ob.y; Shows protected error
  // cout<<ob.z; // Shows Satisfactory output as 5
   //cout<<sizeof (ob);
    return 0;
}