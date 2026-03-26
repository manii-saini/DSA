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
void postorder_traversal(node* root)
{
    if(root==NULL)
    {
        return;
    }
    postorder_traversal(root->left);
    postorder_traversal(root->right);
    cout<<root->data<<" ";
}
int main()
{
    node* root=NULL;
    root=Buildtree(root);
    cout<<"Postorder Traversal is:"<<endl;
    postorder_traversal(root);
    return 0;
}