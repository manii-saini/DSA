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
Node* copyList(Node* head)
{
    if(head==NULL)
        return NULL;

    Node* newhead = new Node(head->data);
    Node* newtail = newhead;

    Node* temp = head->next;
    while(temp != NULL)
    {
        Node* newNode = new Node(temp->data);
        newtail->next = newNode;
        newtail = newNode;
        temp=temp->next;
    }
    return newhead;
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
    insertattail(tail,50);
    print(head);
    cout<<"Original List:"<<endl;
    insertatpos(tail,head,3,25);
    print(head);
    cout<<"Copied List:"<<endl;
    Node* head1=copyList(head);
    print(head1);
    return 0;
}