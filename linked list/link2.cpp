#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    Node(int data1, Node *next1)
    {
        data1=data;
        next= next1;
    }
    Node(int data1)
    {
        data=data1;
        next=nullptr;
    }
};
int main()
{
   int arr[]={2,3,4,5};
   Node x= Node(arr[0],nullptr);
   Node *y= &x;
   cout<<y<<'\n';
    return 0;
}