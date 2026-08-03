int Diameter(Node* root)
{
    if(root==NULL)
    {
        return;
    }

    int left=Diameter(root->left);
    int right=Diameter(root->right);
    int cond=Height(root->left)+1+Height(root->right);
    return max(left,max(right,cond));
}
