void Inorder_traversal(Node* root)
{
    if(root==NULL)
    {
        return;
    }

    Inorder_traversal(root->left);
    cout<<root->data<<" ";
    Inorder_traversal(roo->right);
}
