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
    vector<int> reversePrint(ListNode* head) {
        vector<int> a;
        stack<int> s;
        while (head)
        {
            s.push(head->val);
            head = head->next;
        }
        while (!s.empty())
        {
            a.push_back(s.top());
            s.pop();
        }
        return a;
    }
};
