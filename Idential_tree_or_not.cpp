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
bool Idential(node* &root1,node *&root2)
{
    if(root1==NULL && root2==NULL)
    {
        return true;
    }
    if(root1!=NULL && root2==NULL)
    {
        return false;
    }
    if(root1==NULL && root2!=NULL)
    {
        return false;
    }
    bool left=Idential(root1->left,root2->left);
    bool right=Idential(root1->right,root2->right);
    bool ans=(root1->data)==(root2->data);
    if(left && right && ans)
    {
        return true;
    }
    else
    {
        return false;
    }
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
   cout<<"The two binary tree is Idential or not:"<<Idential(root1,root2);

    return 0;
}
