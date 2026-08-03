void Postorder_traversal(Node* root)
{
    if(root==NULL)
    {
        return;
    }

    Postorder_traversal(root->left);
    Postorder_traversal(root->right);
    cout<<roo->data<<" ";
}
