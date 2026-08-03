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
