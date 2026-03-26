#include<iostream>
using namespace std;
class Node
{
    public:
        int data;
        Node*next;
        Node*prev;
        Node(int data)
        {
            this->data=data;
            this->next=NULL;
            this->prev=NULL;
        }
};
void insertathead(Node* &head,int data)
{
    // if(head==NULL)
    // {
    //     Node*temp=new Node(data);
    //     head=temp;
    //     tail=temp;
    // }
    Node*temp=new Node(data);
    temp->next=head;
    head->prev=temp;
    head=temp;
}

void insertattail(Node* &tail,int data)
{
    // if(tail==NULL)
    // {
    //     Node*temp=new Node(data);
    //     tail=temp;
    //     head=temp;
    // }
    Node* temp=new Node(data);
    tail->next=temp;
    temp->prev=tail;
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
    Node* insertatnode=new Node(data);
    insertatnode->next=temp->next;
    temp->next->prev=insertatnode;
    temp->next=insertatnode;
    insertatnode->prev=temp;

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
int getLength(Node* &head)
{
    int length=0;
    Node* temp=head;
    while(temp!=NULL)
    {
        length++;
        temp=temp->next;
    }
    return length;
}

void deletenode(Node* &head,int position)
{
    Node* temp=head;
    if(position==1)
    {
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    else
    {
        Node*curr=temp;
        Node*prev=NULL;
        int cnt=1;
        while(cnt<position)
        {
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->prev=NULL;
        curr->next=NULL;
        delete curr;
    }
}
int main()
{
    Node* node1=new Node(5);
    Node* head=node1;
    Node*tail=node1;
    print(head);
    cout<<"head:"<<head->data<<endl;
    cout<<"tail:"<<tail->data<<endl;
    insertattail(tail,10);
    print(head);
    cout<<"head:"<<head->data<<endl;
    cout<<"tail:"<<tail->data<<endl;
    insertattail(tail,15);
    print(head);
    cout<<"head:"<<head->data<<endl;
    cout<<"tail:"<<tail->data<<endl;
    insertattail(tail,20);
    print(head);
    cout<<"head:"<<head->data<<endl;
    cout<<"tail:"<<tail->data<<endl;
    insertatpos(tail,head,5,12);
    print(head);
    cout<<"head:"<<head->data<<endl;
    cout<<"tail:"<<tail->data<<endl;
    deletenode(head,3);
    print(head);
    cout<<"head:"<<head->data<<endl;
    cout<<"tail:"<<tail->data<<endl;
    return 0;
}