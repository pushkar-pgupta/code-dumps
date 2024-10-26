#include<iostream>
using namespace std;
template <class X> void myfun(X a, int y)
{
    while (y>0)
    {
        cout<<a<<endl;
        y--;
    }

}

    int main()
    {
        myfun(2.5,3.5); 
        myfun(3.5,5);
        myfun("HEllo",3);
        return 0;
    }