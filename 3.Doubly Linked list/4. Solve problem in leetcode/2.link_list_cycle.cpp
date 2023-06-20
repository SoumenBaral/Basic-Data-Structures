class Solution {
public:
    bool hasCycle(ListNode *head) {

        ListNode* slow = head;
        ListNode* first = head;

            while(first!=NULL && first->next!=NULL)
            {
                slow = slow->next;
                first = first->next->next;
                if(first == slow)
                {
                    return true;
                }
            }
        return false;
    }
};