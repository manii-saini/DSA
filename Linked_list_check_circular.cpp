#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
void insertathead(Node* &head,int data)
{
    Node* temp=new Node(data);
    temp->next=head;
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
void insertattail(Node* &tail,int data)
{
    Node* temp=new Node(data);
    tail->next=temp;
    tail=temp;
}
void insertatpos(Node* &tail,Node* &head,int position,int data)
{
    if(position==1)
    {
        insertathead(head,data);
        return;
    }
    int cnt=1;
    Node* temp=head;
    while(cnt<position-1)
    {
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL)
    {
        insertattail(tail,data);
        return;
    }
    Node* newnode=new Node(data);
    newnode->next=temp->next;
    temp->next=newnode;
}
bool iscircular(Node* &head)
{
    if(head==NULL)
    {
        return true;
    }
    Node* temp=head->next;
    while(temp!=NULL && temp!=head)
    {
        temp=temp->next;
    }
    if(temp==head)
    {
        return true;
    }
    return false;
}

int main()
{
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
    print(head);
    insertattail(tail,20);
    print(head);
    insertattail(tail,30);
    print(head);
    insertattail(tail,40);
    print(head);
    insertattail(tail,10);
    print(head);
    if(iscircular(tail))
    {
        cout<<"Linked List is circular:"<<endl;
    }
    else
    {
        cout<<"Linked List is not circular:"<<endl;
    }
    return 0;
}