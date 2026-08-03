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
