#include<iostream>
using namespace std;
class Node 
{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data)
    {
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

Node* Buildtree(Node* root)
{
    cout<<"Enter a data:"<<endl;
    int data;
    cin>>data;
    if(data==-1)
    {
        return NULL;
    }
    root=new Node(data);
    cout<<"Enter insert the right side of the data:"<<data<<endl;
    root->right=Buildtree(root->right);
    cout<<"Enter insert the left side of the data:"<<data<<endl;
    root->left=Buildtree(root->left);
    return root;
}
int main()
{
    Node* root=NULL;
    root=Buildtree(root);
    cout<<endl;
    cout<<endl;
    return 0;
}
