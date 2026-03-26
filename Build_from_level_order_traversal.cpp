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
void Build_From_Level_order(node* &root)
{
    queue<node*>q;
    cout<<"Enter data for root:"<<endl;
    int data;
    cin>>data;
    root=new node(data);
    q.push(root);
    while(!q.empty())
    {
        node* temp=q.front();
        q.pop();

        cout<<"Enter data for left node:"<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;
        if(leftdata!=-1)
        {
            temp->left= new node(leftdata);
            q.push(temp->left);
        }

        cout<<"Enter data for right node:"<<temp->data<<endl;
        int rightdata;
        cin>>rightdata;
        if(rightdata!=-1)
        {
            temp->right= new node(rightdata);
            q.push(temp->right);
        }
    }
}
// void inorder_traversal(node* root,int count)
// {
//     if(root==NULL)
//     {
//         return;
//     }
//     inorder_traversal(root->left,count);
//     if(root->right==NULL && root->right==NULL)
//     {
//         count++;
//         return 
//     }
//     inorder_traversal(root->right,count);
// }
void level_order_taversal(node* root)
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
int main()
{
    node* root=NULL;
    Build_From_Level_order(root);
    level_order_taversal(root);
    int cnt=1;
   // inorder_traversal(root,cnt);
    return 0;
}
