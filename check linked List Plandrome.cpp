class Solution {
public:
    bool solve(vector<int>&ans)
    {
        int start=0;
        int end=ans.size()-1;
        while(start<=end)
        {
            if(ans[start]!=ans[end])
            {
                return false;
            }
            else
            {
                start++;
                end--;
            }
        }
        return true;
    }
    bool isPalindrome(ListNode* head) {
        vector<int>ans;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            ans.push_back(temp->val);
            temp=temp->next;
        }
        return solve(ans);
    }
};
