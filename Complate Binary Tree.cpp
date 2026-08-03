#include<iostream>
#include<queue>
#include<map>
#include<vector>
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

    int left=Diameter(root->left);
    int right=Diameter(root->right);
    int cond=Height(root->left)+1+Height(root->right);
    return max(left,max(right,cond));
}

bool isBalenced(Node* root)
{
    if(root==NULL)
    {
        return true;
    }

    bool left=isBalenced(root->left);
    bool right=isBalenced(root->right);
    bool cond=abs(Height(root->left)-Height(root->right)) <=1;

    if(left && right && cond)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int total_leafs(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }

    if(root->left==NULL && root->right==NULL)
    {
        return 1;
    }

    return total_leafs(root->left)+total_leafs(root->right);
}

int sum_of_nodes(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }

    int left=sum_of_nodes(root->left);
    int right=sum_of_nodes(root->right);
    return root->data+left+right;
}

int total_nodes(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }

    int left=total_nodes(root->left);
    int right=total_nodes(root->right);
    return left+right+1;
}

bool isidentical(Node* root1,Node* root2)
{
    if(root1==NULL && root2==NULL)
    {
        return true;
    }

    if(root1->left==NULL && root2->left!=NULL)
    {
        return false;
    }

    if(root1->right==NULL && root2->right!=NULL)
    {
        return false;
    }

    bool left=isidentical(root1->left,root2->left);
    bool right=isidentical(root2->right,root2->right);
    bool cond=root1->data==root2->data;
    if(left && right && cond)
    {
        return true;
    }
    else
    {
        return true;
    }
}
pair<bool,int> sumtreefast(Node* root)
{
    if(root==NULL)
    {
        pair<bool,int>p=make_pair(true,0);
            return p;
    }

    if(root->left==NULL && root->right==NULL)
    {
        pair<bool,int>p=make_pair(true,root->data);
            return p;
    }

    pair<bool,int>left=sumtreefast(root->left);
    pair<bool,int>right=sumtreefast(root->right);

    bool leftans=left.first;
    bool rightans=right.first;
    int cond=root->data==left.second+right.second;
    pair<bool,int>ans;
    if(leftans && rightans && cond)
    {
        ans.first=true;
        ans.second=2*root->data;
    }
    else
    {
        ans.first=false;
    }
    return ans;
}
bool sumtree(Node* root)
{
    return sumtreefast(root).first;
}

vector<int> zigzagtraversal(Node* root)
{
    vector<int>result;
    if(root==NULL)
    {
        return result;
    }

    queue<Node*>q;
    bool leftToRight=true;
    q.push(root);

    while(!q.empty())
    {
        int size=q.size();
        vector<int>ans(size);

        for(int i=0;i<size;i++)
        {
            Node* temp=q.front();
            q.pop();

            int index=leftToRight ? i : size-1-i;
            ans[index]=temp->data;

            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
        }
        leftToRight!=leftToRight;
        for(auto i:ans)
        {
            result.push_back(i);
        }
    }
    return result;
}

vector<int> topview(Node* root)
{
    vector<int>ans;
    if(root==NULL)
    {
        return ans;
    }

    map<int,int>topNode;
    queue<pair<Node*,int>>q;
    q.push(make_pair(root,0));
    while(!q.empty())
    {
        pair<Node*,int> temp=q.front();
        q.pop();
        Node* frontNode=temp.first;
        int hd=temp.second;

        if(topNode.find(hd)==topNode.end())
            topNode[hd]=frontNode->data;

        if(frontNode->left)
            q.push(make_pair(frontNode->left,hd-1));

        if(frontNode->right)
            q.push(make_pair(frontNode->right,hd+1));             
    }
    for(auto i:topNode)
    {
        ans.push_back(i.second);
    }
    return ans;
}

vector<int> bottomview(Node* root)
{
    vector<int>ans;
    if(root==NULL)
    {
        return ans;
    }

    map<int,int>topNode;
    queue<pair<Node*,int>>q;
    q.push(make_pair(root,0));
    while(!q.empty())
    {
        pair<Node*,int> temp=q.front();
        q.pop();
        Node* frontNode=temp.first;
        int hd=temp.second;

        topNode[hd]=frontNode->data;

        if(frontNode->left)
            q.push(make_pair(frontNode->left,hd-1));

        if(frontNode->right)
            q.push(make_pair(frontNode->right,hd+1));             
    }
    for(auto i:topNode)
    {
        ans.push_back(i.second);
    }
    return ans;
}


void solve(Node* root,vector<int>&ans,int level)
{
    if(root==NULL)
    {
        return;
    }

    if(level==ans.size())
    {
        ans.push_back(root->data);
    }

    solve(root->left,ans,level+1);
    solve(root->right,ans,level+1);
}
vector<int> leftview(Node* root)
{
    vector<int>ans;
    solve(root,ans,0);
    return ans;
}

void solve1(Node* root,vector<int>&ans,int level)
{
    if(root==NULL)
    {
        return;
    }

    if(level==ans.size())
    {
        ans.push_back(root->data);
    }

    solve1(root->right,ans,level+1);
    solve1(root->left,ans,level+1);
}
vector<int> rightview(Node* root)
{
    vector<int>ans;
    solve(root,ans,0);
    return ans;
}

int main()
{
    Node* root=NULL;
    root=Buildtree(root);
    cout<<endl;
    cout<<"Level order traversal is:"<<endl;
    Level_order_traversal(root);
    cout<<endl;

    cout<<"Preorder Traversal is:"<<endl;
    Preorder_traversal(root);
    cout<<endl;

    cout<<"Inorder Traversal is:"<<endl;
    Inorder_traversal(root);
    cout<<endl;

    cout<<"The Postorder Traversal is:"<<endl;
    Postorder_traversal(root);
    cout<<endl;

    cout<<endl;

    cout<<"The Height of a binary tree is:"<<Height(root);
    cout<<endl;

    cout<<"The Diameter of a binary tree is:"<<Diameter(root);
    cout<<endl;

    cout<<"The binary tree is isBalenced or not:"<<isBalenced(root);
    cout<<endl;

    cout<<"The total leaf nodes in a binary tree :"<<total_leafs(root);
    cout<<endl;

    cout<<"The Total sum of nodes of nodes in a binary tree:"<<sum_of_nodes(root);
    cout<<endl;

    cout<<"The total nodes of binary tree is:"<<total_nodes(root);
    cout<<endl;

    cout<<"The two binary tree is isidentical or not:"<<isidentical(root,root);
    cout<<endl;

    cout<<"The binary tree is sum tree or not:"<<sumtree(root);
    cout<<endl;

    cout<<"The Zigzag Traversal is:"<<endl;
    vector<int>ans1=zigzagtraversal(root);
    for(int val:ans1)
    {
        cout<<val<<" ";
    }

    cout<<endl;

    cout<<"The top view is:"<<endl;
    vector<int>ans2=topview(root);
    for(int val:ans2)
    {
        cout<<val<<" ";
    }

    cout<<endl;

    cout<<"The bottom view is:"<<endl;
    vector<int>ans3=bottomview(root);
    for(int val:ans3)
    {
        cout<<val<<" ";
    }

    cout<<endl;


    cout<<"The Left view is:"<<endl;
    vector<int>ans4=leftview(root);
    for(int val:ans4)
    {
        cout<<val<<" ";
    }

    cout<<endl;

    cout<<"The right view is:"<<endl;
    vector<int>ans5=leftview(root);
    for(int val:ans5)
    {
        cout<<val<<" ";
    }
    return 0;

}
