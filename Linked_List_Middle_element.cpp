#include<iostream>
using namespace std;
class Node
{
public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void insertathead(Node* &head,int data)
{
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;
}
int getLength(Node* &head)
{
    int len=0;
    Node* temp=head;
    while(temp!=NULL)
    {
        len++;
        temp=temp->next;
    }
    return len;
}
int middleelement(Node* &head)
{
    int cnt=0;
    int Length=getLength(head);
    int ans=(Length/2);
    Node* temp=head;
    while(cnt<ans)
    {
        temp=temp->next;
        cnt++;
    }
    return temp->data;
}
void print(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    Node* node1=new Node(10);
    Node* head=node1;
     print(head);
    insertathead(head,20);
     print(head);
    insertathead(head,30);
     print(head);
    insertathead(head,40);
     print(head);
    cout<<"The middle element is:"<<middleelement(head)<<endl;
    return 0;
}