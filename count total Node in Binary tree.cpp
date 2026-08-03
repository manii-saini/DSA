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
