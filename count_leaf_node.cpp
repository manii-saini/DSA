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
  cout<<"Enter the data:"<<endl;
  int data;
  cin>>data;
  root=new node(data);
  if(data==-1)
  {
    return NULL;
  }
  cout<<"Enter inserting data into left child:"<<data<<endl;
  root->left=Buildtree(root->left);
  cout<<"Enter inserting data into right data:"<<data<<endl;
  root->right=Buildtree(root->right);
  return root;
}
void level_order_traversal(node* &root)
{
  queue<node*> q;
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
int count_leaf_node(node* root)
{
    if(root == NULL)
    {
        return 0;
    }
    if(root->left == NULL && root->right == NULL)
    {
        return 1;
    }
    return count_leaf_node(root->left) + count_leaf_node(root->right);
}

int main()
{
  node* root=NULL;
  root=Buildtree(root);
  level_order_traversal(root);
  int total_leaf = count_leaf_node(root);
    cout << "total leaf node is:" << total_leaf << endl;
  return 0;
}