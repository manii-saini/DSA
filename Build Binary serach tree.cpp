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

Node* insertintobst(Node* root,int data)
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
void takeinput(Node* &root)
{
    int data;
    cin>>data;
    while(data!=-1)
    {
        root=insertintobst(root,data);
        cin>>data;
    }
}
