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

Node* Buildtree(Node* root)
{
    cout<<"Enter a data:"<<endl;
    int data;
    cin>>data;
    if(data==-1)
    {
        return NULL;
    }
    root=new Node(data);
    cout<<"Enter insert the right side of the data:"<<data<<endl;
    root->right=Buildtree(root->right);
    cout<<"Enter insert the left side of the data:"<<data<<endl;
    root->left=Buildtree(root->left);
    return root;
}

void Level_order_traversal(Node* root)
{
    if(root==NULL)
    {
        return;
    }

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
int main()
{
    Node* root=NULL;
    root=Buildtree(root);
    cout<<endl;
    cout<<"Level order traversal is:"<<endl;
    Level_order_traversal(root);
    cout<<endl;
    return 0;
}
