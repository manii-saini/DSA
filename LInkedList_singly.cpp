#include<iostream>
using namespace std;
class Node
{
    public:
        int data;
        Node*next;
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
void insertattail(Node* &tail,int data)
{
    Node* temp=new Node(data);
    tail->next=temp;
    tail=temp;
}
void insertatposition(Node* &tail,Node* &head,int position,int data)
{

    //insert at head
    if(position==1)
    {
        insertathead(head,data);
        return;
    }
    Node* temp=head;
    int cnt=1;
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
    Node* nodetoinsert=new Node(data);
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;
}
void deletenode(Node* &tail,Node* &head,int position)
{
    if(position==1)
    {
        // delete first node
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;

    }
    else
    {
        Node* curr=head;
        Node* prev=NULL;
        //delete middle and last node
        int cnt=1;
        while(cnt<position)
        {
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
        if(prev->next==NULL)
        {
            tail=prev;
        }
    }
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
    Node*node1=new Node(10);
    Node*head=node1;
    Node*tail=node1;
    print(head);
    insertattail(tail,12);
    print(head);
    insertattail(tail,15);
    print(head);
    insertatposition(tail,head,1,22);
    print(head);
    deletenode(tail,head,4);
    print(head);
    cout<<tail->data<<endl;
    return 0;
}