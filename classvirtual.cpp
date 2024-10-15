#include<iostream>
using namespace std;
class b
{
    public:
     virtual void xyz()
    {
        cout<<"Hello";
    }
};
    class d: public b
    {
        public:
        void xyz()
        {
            cout<<"World";
        }
    };

int main()
{
    b ob1,*ptr;
    d ob2;
    ptr=&ob2;
    ptr->xyz();  
    return 0;
}