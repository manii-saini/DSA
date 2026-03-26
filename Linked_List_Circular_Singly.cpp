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
Node* Insertintobst(Node* &root,int data)
{
    if(root==NULL)
    {
        root=new Node(data);
        return root;
    }
    if(data>root->data)
    {
        root->right=Insertintobst(root->right,data);
    }
    else
    {
        root->left=Insertintobst(root->left,data);
    }
    return root;
}
void takeinput(Node* &root)
{
    int data;
    cin>>data;
    while(data!=-1)
    {
        root=Insertintobst(root,data);
        cin>>data;
    }
}
void level_order_traversal(Node* &root)
{
    queue<Node*>q;
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
void Preorder_traversal(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    Preorder_traversal(root->left);
    Preorder_traversal(root->right);
}
void Inorder_traversal(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    Inorder_traversal(root->left);
    cout<<root->data<<" ";
    Inorder_traversal(root->right);
}
void Postorder_traversal(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    Postorder_traversal(root->left);
    Postorder_traversal(root->right);
    cout<<root->data<<" ";
}
int leaf_nodes(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    if(root->left==NULL && root->right==NULL)
    {
        return 1;
    }
    return leaf_nodes(root->left)+leaf_nodes(root->right);
}
int nodes_sum(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    return nodes_sum(root->left)+nodes_sum(root->right)+root->data;
}
int Height(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int left=Height(root->left);
    int right=Height(root->right);
    return max(left,right)+1;
}
int Diameter(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int op1=Diameter(root->left);
    int op2=Diameter(root->right);
    int op3=Height(root->left)+Height(root->right)+1;
    return max(op1,max(op2,op3));
}
bool isBalenced(Node* root)
{
    if(root==NULL)
    {
        return true;
    }
    bool left=isBalenced(root->left);
    bool right=isBalenced(root->right);
    bool diff=abs(Height(root->left)-Height(root->right)) <=1;
    if(left && right && diff)
    {
        return true;
    }
    else
    {
        return false;
    }
}
 bool searchelement(Node* root,int val)
{
    if(root==NULL)
    {
        return false;
    }
    if(root->data==val)
    {
        return true;
    }
    else if(root->data>val)
    {
        return searchelement(root->left,val);
    }
    else
    {
        return searchelement(root->right,val);
    }

}
int main()
{
    Node* root=NULL;
    cout<<"Enter insert data into BST:"<<endl;
    takeinput(root);
    cout<<"Level order traversal is:"<<endl;
    level_order_traversal(root);
    cout<<"Preorder Traversal is:"<<endl;
    Preorder_traversal(root);
    cout<<endl;
    cout<<"Inorder Traversal is:"<<endl;
    Inorder_traversal(root);
    cout<<endl;
    cout<<"Postorder Traversal is:"<<endl;
    Postorder_traversal(root);
    cout<<endl;
    cout<<"Height of a Binary search tree is:"<<Height(root);
    cout<<endl;
    cout<<"The Diamter of a Bianry tree is:"<<Diameter(root);
    cout<<endl;
    cout<<"The sum of all nodes in a binary tree is:"<<nodes_sum(root);
    cout<<endl;
    cout<<"The Binary tree is balenced or not:"<<isBalenced(root);
    cout<<endl;
    int total_leaf=leaf_nodes(root);
    cout<<"The Total leaf Nodes is:"<<total_leaf;
    cout<<endl;
    cout<<"The elemet is presnt or not:"<<searchelement(root,45);
    cout<<endl;
    return 0;
}