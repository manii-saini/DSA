class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        vector<int>ans;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            ans.push_back(temp->val);
            temp=temp->next;
        }
        vector<int>ans1;
        for(int i=0;i<ans.size();i=i+2)
        {
                ans1.push_back(ans[i]);
        }

        for(int i=1;i<ans.size();i=i+2)
        {
                ans1.push_back(ans[i]);
        }

        temp=head;
        int i=0;
        while(temp!=NULL)
        {
            temp->val=ans1[i];
            temp=temp->next;
            i++;
        }

        return head;
    }
};
