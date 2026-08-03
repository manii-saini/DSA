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
