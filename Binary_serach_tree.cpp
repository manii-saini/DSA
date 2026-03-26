#include<iostream>
#include<queue>
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
Node* insertintobst(Node* &root,int data)
{
  if(root==NULL)
  {
    root=new Node(data);
    return root;
  }
  if(data>root->data)
  {
    root->right=insertintobst(root->right,data);
  }
  else
  {
    root->left=insertintobst(root->left,data);
  }
  return root;
}
void takeinput(Node *&root)
{
  int data;
  cin>>data;
  while(data!=-1)
  {
    root=insertintobst(root,data);
    cin>>data;
  }
}
void levelorder_traversal(Node* &root)
{
  queue<Node*> q;
  q.push(root);
  q.push(NULL);
  while(!q.empty())
  {
    Node* temp=q.front();
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
void Preorder_traversal(Node* &root)
{
  if(root==NULL)
  {
    return;
  }
  cout<<root->data<<" ";
  Preorder_traversal(root->left);
  Preorder_traversal(root->right);
}
void Inorder_traversal(Node*&root)
{
  if(root==NULL)
  {
    return;
  }
  Inorder_traversal(root->left);
  cout<<root->data<<" ";
  Inorder_traversal(root->right);
}
void Postorder_traversal(Node* &root)
{
  if(root==NULL)
  {
    return;
  }
  Postorder_traversal(root->left);
  Postorder_traversal(root->right);
  cout<<root->data<<" ";
}
Node* minvalue(Node* &root)
{
  Node* temp=root;
  while(temp->left!=NULL)
  {
    temp=temp->left;
  }
  return temp;
}
Node* maxvalue(Node* &root)
{
  Node* temp=root;
  while(temp->right!=NULL)
  {
    temp=temp->right;
  }
  return temp;
}
int search_element(Node* &root,int x)
{
  if(root==NULL)
  {
    return false;
  }
  if(root->data==x)
  {
    return true;
  }
  if(root->data>x)
  {
    return search_element(root->left,x);
  }
  else
  {
    return search_element(root->right,x);
  }
}
Node* deleteFromBST(Node* &root,int value)
{
  if(root==NULL)
  {
    return root;
  }
  if(root->data==value)
  {
    if(root->left==NULL && root->right==NULL)
    {
      delete root;
      return NULL;
    }
    if(root->left!=NULL && root->right==NULL)
    {
      Node* temp=root->left;
      delete root;
      return temp;
    }
    if(root->left==NULL && root->right!=NULL)
    {
      Node* temp=root->right;
      delete root;
      return temp;
    }
    if(root->left!=NULL && root->right!=NULL)
    {
      int mini=minvalue(root->right)->data;
      root->data=mini;
      root->right=deleteFromBST(root->right,mini);
      return root;
    }
  }
  else if(root->data>value)
  {
    root->left=deleteFromBST(root->left,value);
    return root;
  }
  else
  {
    root->right=deleteFromBST(root->right,value);
    return root;
  }
}
int main()
{
  Node* root=NULL;
  cout<<"Enter data for bst:"<<endl;
  takeinput(root);
  cout<<"Level order traversal is:"<<endl;
  levelorder_traversal(root);
  cout<<"Preorder Traversal is:"<<endl;
  Preorder_traversal(root);
  cout<<endl;
  cout<<"Inorder Traverversdal is:"<<endl;
  Inorder_traversal(root);
  cout<<endl;
  cout<<"Post order Traversal is:"<<endl;
  Postorder_traversal(root);
  cout<<endl;
  cout<<"Element is persent or not:"<<search_element(root,7);
  cout<<endl;
  cout<<"Maximum value is:"<<maxvalue(root)->data<<endl;
  cout<<"Minimum value is:"<<minvalue(root)->data<<endl;
  cout<<endl;
  deleteFromBST(root,7);
  cout<<"Level order traversal is:"<<endl;
  levelorder_traversal(root);
  cout<<"Preorder Traversal is:"<<endl;
  Preorder_traversal(root);
  cout<<endl;
  cout<<"Inorder Traverversdal is:"<<endl;
  Inorder_traversal(root);
  cout<<endl;
  cout<<"Post order Traversal is:"<<endl;
  Postorder_traversal(root);
  cout<<endl;
  cout<<"Element is persent or not:"<<search_element(root,7);
  cout<<endl;
  cout<<"Maximum value is:"<<maxvalue(root)->data<<endl;
  cout<<"Minimum value is:"<<minvalue(root)->data<<endl;
  cout<<endl;
  return 0;
}