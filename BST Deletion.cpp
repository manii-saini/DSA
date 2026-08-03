Node* deletion(Node* root,int x)
{
    if(root==NULL)
    {
        return root;
    }

    if(root->data==x)
    {
        if(root->left==NULL && root->right==NULL)
        {
            delete root;
            return NULL;
        }

        if(root->left!=NULL && root->right==NULL)
        {
            Node* temp=root->left;
            delete root;
            return temp;
        }

        if(root->left==NULL && root->right!=NULL)
        {
            Node* temp=root->right;
            delete root;
            return temp;
        }

        if(root->left!=NULL && root->right!=NULL)
        {
            int mini=minvalue(root->right)->data;
            root->data=mini;
            root->right=deletion(root->right,mini);
            return root;
        }
    }
    else if(root->data<x)
    {
        root->right=deletion(root->right,x);
        return root;
    }
    else
    {
        root->left=deletion(root->left,x);
        return root;
    }
    return root;
}
