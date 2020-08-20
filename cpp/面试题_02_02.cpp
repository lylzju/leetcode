/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int kthToLast(ListNode* head, int k) {
        int i = 1;
        ListNode *cur = head, *tar = head;
        while (cur->next)
        {
            if (i >= k)
            {
                tar = tar->next;
            }
            cur = cur->next;
            ++i;
        }
        return tar->val;
    }
};
