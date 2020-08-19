/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (!head || !head->next || !head->next->next)
        {
            return head;
        }
        ListNode *p1 = head, *p2 = head->next, *second = head->next;
        int i = 0;
        while (p1->next->next)
        {
            p2 = p1->next;
            p1->next = p2->next;
            p1 = p1->next;
            ListNode *temp = p1;
            p1 = p2;
            p2 = temp;
            ++i;
        }
        if (i % 2)
        {
            p2->next = second;
            p1->next = nullptr;
        }
        else
        {
            p1->next = second;
            p2->next = nullptr;
        }
        return head;
    }
};
