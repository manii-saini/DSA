void solve1(Node* root,vector<int>&ans,int level)
{
    if(root==NULL)
    {
        return;
    }

    if(level==ans.size())
    {
        ans.push_back(root->data);
    }

    solve1(root->right,ans,level+1);
    solve1(root->left,ans,level+1);
}
vector<int> rightview(Node* root)
{
    vector<int>ans;
    solve(root,ans,0);
}
