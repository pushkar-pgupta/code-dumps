#include<iostream>
using namespace std;
template <class X,class Y> void myfun(X a,Y b)
{
    cout<<a<<endl<<b<<endl;
}
    int main()
    {
        myfun(2.5,3.5); 
        myfun(3.5,5);
        myfun(3.5,"helloworld");
        return 0;
    }