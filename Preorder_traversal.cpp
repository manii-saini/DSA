#include<iostream>
#include<queue>
using namespace std;
class node
{
    public:
    int data;
    node*left;
    node*right;
    node(int data)
    {
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
node* Buildtree(node* root)
{
    cout<<"Enter a data:"<<endl;
    int data;
    cin>>data;
    root=new node(data);
    if(data==-1)
    {
        return NULL;
    }
    cout<<"Enter inserting data of left:"<<data<<endl;
    root->left=Buildtree(root->left);
    cout<<"Enter inserting data of right:"<<data<<endl;
    root->right=Buildtree(root->right);
    return root;
}
void preorder_traversal(node* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preorder_traversal(root->left);
    preorder_traversal(root->right);
}
int main()
{
    node* root=NULL;
    root=Buildtree(root);
    cout<<"preorder Traversal is:"<<endl;
    preorder_traversal(root);
    return 0;
}