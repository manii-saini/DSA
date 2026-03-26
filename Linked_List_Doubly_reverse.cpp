#include<iostream>
using namespace std;
class Node
{
    public:
        int data;
        Node* next;
        Node* prev;
        Node(int data)
        {
            this->data=data;
            this->next=NULL;
            this->prev=NULL;
        }
};
void insertathead(Node* &head,int data)
{
    Node* temp=new Node(data);
    temp->next=head;
    head->prev=temp;
    head=temp;
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
void reverse(Node* &head)
{
    Node* next=NULL;
    Node* prev=NULL;
    Node* curr=head;
    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        curr->prev=next;
        prev=curr;
        curr=next;
    }
    head=prev;
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
    insertathead(head,50);
    print(head);
    reverse(head);
    print(head);
    return 0;
}