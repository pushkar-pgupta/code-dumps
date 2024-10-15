//Length of Linked lIST 
#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    Node(int data1,Node *next1)
    {
        data1=data;
        next1=next;
    }
    Node(int data1)
    {
        data1=data;
        next=nullptr;

    }

};
int length(Node *head)
{
    int cnt=0;
    Node *temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
        cnt++;
    }
     return cnt;
}
int main()
{
    int arr[]={2,3,4,5};
    Node *head=new Node(arr[0]);
    head->next=new Node(arr[1]);
    head->next->next= new Node(arr[2]);
    head->next->next->next= new Node(arr[3]);
    cout<<length(head)<<'\n';

    return 0;
}