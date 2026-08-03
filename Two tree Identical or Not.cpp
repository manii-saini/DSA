
bool isidentical(Node* root1,Node* root2)
{
    if(root1==NULL && root2==NULL)
    {
        return true;
    }

    if(root1->left==NULL && root2->left!=NULL)
    {
        return false;
    }

    if(root1->right==NULL && root2->right!=NULL)
    {
        return false;
    }

    bool left=isidentical(root1->left,root2->left);
    bool right=isidentical(root2->right,root2->right);
    bool cond=root1->data==root2->data;
    if(left && right && cond)
    {
        return true;
    }
    else
    {
        return true;
    }
}
