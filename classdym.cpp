#include<iostream>
#include<new>
using namespace std;
int  main()
{
    int *ptr;
    ptr=new int[5];
    cout<<"Enter a no \n";
    for (int i=0;i<5;i++)
    {
        cin>>*(ptr+i);
    }

    cout<<"You have entered no: "<<*ptr<<endl;
    for(int j=0;j<5;j++)
    {
        cout<<*(ptr+j)<<endl;
    }
    return 0;
    delete [] ptr;
}