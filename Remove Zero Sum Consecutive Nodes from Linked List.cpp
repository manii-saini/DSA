class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) {

        ListNode dummy(0);
        dummy.next = head;

        unordered_map<int, ListNode*> mp;

        int prefix = 0;

        // First pass
        for (ListNode* curr = &dummy; curr != NULL; curr = curr->next) {
            prefix += curr->val;
            mp[prefix] = curr;
        }

        // Second pass
        prefix = 0;
        for (ListNode* curr = &dummy; curr != NULL; curr = curr->next) {
            prefix += curr->val;
            curr->next = mp[prefix]->next;
        }

        return dummy.next;
    }
};
