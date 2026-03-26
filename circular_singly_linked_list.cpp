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
void insertatpos(Node* &tail,int element,int data)
{
  if(tail==NULL)
  {
    Node*newnode=new Node(data);
    tail=newnode;
    newnode->next=newnode;
  }
  else
  {
    Node* curr=tail;
    while(curr->data!=element)
    {
      curr=curr->next;
    }
    Node* temp=new Node(data);
    temp->next=curr->next;
    curr->next=temp;
  }
}
void print(Node* &tail)
{
  if(tail==NULL)
  {
    cout<<"List is Empty:"<<endl;
  }
  Node* temp=tail;
  do
  {
    cout<<tail->data<<" ";
    tail=tail->next;
  }
  while(tail!=temp);
  cout<<endl;
}
void deletenode(Node* &tail,int value)
{
  if(tail==NULL)
  {
    cout<<"Linked List is Empty nothing to delete:"<<endl;
    return;
  }
  else
  {
    Node* prev=tail;
    Node*curr=prev->next;
    while(curr->data!=value)
    {
      prev=curr;
      curr=curr->next;
    }
    prev->next=curr->next;
    if(tail==curr)
    {
      tail=prev;
    }
    else if(curr==prev)
    {
      tail=NULL;
    }
    curr->next=NULL;
    delete curr;
  }
}
int main()
{
  Node* tail=NULL;
  insertatpos(tail,1,3);
  print(tail);
   insertatpos(tail,3,5);
  print(tail);
   insertatpos(tail,5,7);
  print(tail);
   insertatpos(tail,7,9);
  print(tail);
   insertatpos(tail,9,11);
  print(tail);
  deletenode(tail,11);
  cout<<"After Delecction:"<<endl;
  print(tail);
  return 0;
}
