
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
