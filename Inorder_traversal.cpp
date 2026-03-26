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
void Inorder_traversal(node* root)
{
    if(root==NULL)
    {
        return;
    }
    Inorder_traversal(root->left);
    cout<<root->data<<" ";
    Inorder_traversal(root->right);
}
int main()
{
    node* root=NULL;
    root=Buildtree(root);
    cout<<"Inorder Traversal is:"<<endl;
    Inorder_traversal(root);
    return 0;
}