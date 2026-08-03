pair<bool,int> sumtreefast(Node* root)
{
    if(root==NULL)
    {
        pair<bool,int>p=make_pair(true,0);
    }

    if(root->left==NULL && root->right==NULL)
    {
        pair<bool,int>p=make_pair(true,root->data);
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
