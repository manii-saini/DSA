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
int sum_of_all_nodes(node* &root)
{
    if(root==NULL)
    {
        return 0;
    }
    int sum1=sum_of_all_nodes(root->left);
    int sum2=sum_of_all_nodes(root->right);
    return root->data+sum1+sum2;
}
bool is_sum_tree(node* &root)
{
    if(root==NULL)
    {
        return true;
    }
    bool left=is_sum_tree(root->left);
    bool right=is_sum_tree(root->right);
    if((root->data)==(sum_of_all_nodes(root->left)+sum_of_all_nodes(root->right)))
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
    cout<<"Check the binary tree is sum tree or not:"<<is_sum_tree(root);
    cout<<endl;
    return 0;
}
