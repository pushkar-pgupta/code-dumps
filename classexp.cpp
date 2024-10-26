#include<iostream>
using namespace std;

int main()
{
    try{
        throw 100;
    }
    catch(double i){
        cout<<"An Exception "<<100<<endl;
    }
    return 0;
}