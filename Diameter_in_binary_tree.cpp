#include<iostream>
#include<queue>
using namespace std;
class node
{
    public:
    int data;
    node* left;
    node* right;
    node(int data)
    {
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
node* Buildtree(node* &root)
{
    cout<<"Enter a data:"<<endl;
    int data;
    cin>>data;
    root=new node(data);
    if(data==-1)
    {
        return NULL;
    }
    cout<<"Enter Inserting data into left child:"<<data<<endl;
    root->left=Buildtree(root->left);
    cout<<"Enter inserting data into right child:"<<data<<endl;
    root->right=Buildtree(root->right);
    return root;
}
void level_order_traversal(node* &root)
{
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        node* temp=q.front();
        q.pop();
        if(temp==NULL)
        {
            cout<<endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout<<temp->data<<" ";
            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}
int height(node* &root)
{
    if(root==NULL)
    {
        return 0;
    }
    int h1=height(root->left);
    int h2=height(root->right);
    return max(h1,h2)+1;
}
int diameter(node*&root)
{
    if(root==NULL)
    {
        return 0;
    }
    int op1=diameter(root->left);
    int op2=diameter(root->right);
    int op3=height(root->left)+height(root->right)+1;
    return max(op1,max(op2,op3));
}
int main()
{
    node* root=NULL;
    node* root1=NULL;
    node* root2=NULL;
    root=Buildtree(root);
    cout<<endl;
    cout<<"Level order Traversal is:"<<endl;
    level_order_traversal(root);
    cout<<endl;
    cout<<"Diamter of a binary tree is:"<<diameter(root);
    return 0;
}
