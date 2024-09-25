#include<iostream>
#include<new>
using namespace std;
class a
    {
        int *p;
        int sz;
        public:
        a (int size)
        {
            p= new int[size];
            sz= size;
        }
       
        void a :: read()
        {
            for (int i=0;i<sz;i++)
            //cin>>p[i];
            p[i]=i;

        }
        void a :: disp()
        {
            for(int i=0;i<sz;i++)
            cout<<p[i];
        }
        a (const a &o)
        {
            p=new int[o.sz];
            sz=o.sz;
            for(int i=0;i<o.sz;i++)
            p[i]=(o.p[i]);
        }
    };
int main()
{
    a ob1(5);
    ob1.read();
    ob1.disp();
    a ob2(ob1);
    ob2.disp();
    return 0;
}