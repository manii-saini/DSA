#include<iostream>
#include<vector>
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
// insert at head
void insertathead(Node* &head,int data)
{
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;
}
//insert at tail
void insertattail(Node* &tail,int data)
{
    Node* temp=new Node(data);
    tail->next=temp;
    tail=temp;
}
//insert at position
void insertatpos(Node* &tail,Node* &head,int position,int data)
{
    Node* temp=head;
    int cnt=1;
    if(position==1)
    {
        insertathead(head,data);
        return;
    }
    else
    {
        Node* curr=head;
        while(cnt<position-1)
        {
            curr=curr->next;
            cnt++;
        }
        if(tail->next==NULL)
        {
            insertattail(tail,data);
            return;
        }
        if(curr==NULL)
        {
            tail=curr;
        }
        Node* newnode=new Node(data);
        newnode->next=curr->next;
        curr=newnode;  
    }
}
// delete node
void deletenode(Node* &tail,Node* &head,int position)
{
    if(head==nullptr)
    {
        return;
    }
    Node* temp=head;
    if(position==1)
    {
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else
    {
        int cnt=1;
        Node* curr=head;
        Node* prev=NULL;
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
} // check plandrome
bool checkplandrome(vector<int> ans)
{
    int e=ans.size()-1;
    int s=0;
    while(s<=e)
    {
        if(ans[s]!=ans[e])
        {
            return 0;
        }
        s++;
        e--;
    }
    return 1;
}
 // check plandrome
bool isplandrome(Node* &head,int data)
{
    vector<int> ans;
    Node* temp=head;
    while(temp!=NULL)
    {
        ans.push_back(temp->data);
        temp=temp->next;
    }
     return checkplandrome(ans);
}
// print the Linked List
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
    Node* head=node1;
    Node*tail=node1;
    print(head);
    cout<<"head:"<<head->data<<endl;
    cout<<"tail:"<<tail->data<<endl;
    insertattail(tail,20);
    print(head);
    cout<<"head:"<<head->data<<endl;
    cout<<"tail:"<<tail->data<<endl;
    insertatpos(tail,head,3,30);
    print(head);
    cout<<"head:"<<head->data<<endl;
    cout<<"tail:"<<tail->data<<endl;
    insertattail(tail,40);
    print(head);
    cout<<"head:"<<head->data<<endl;
    cout<<"tail:"<<tail->data<<endl;
    deletenode(tail,head,4);
    print(head);
    cout<<"head:"<<head->data<<endl;
    cout<<"tail:"<<tail->data<<endl;
    if(isplandrome(head,0))
    {
        cout<<"The Linked list is plandrome:"<<endl;
    }
    else
    {
        cout<<"The Linked list is not plandrome:"<<endl;
    }
    return 0;
}