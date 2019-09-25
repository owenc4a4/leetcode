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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        vector<ListNode *> temp;
        ListNode *cur = head;

        int index = 0;
        while (cur != NULL)
        {
            temp.push_back(cur);
            cur = cur->next;
        }

        if (temp.size() - n == 0)
        {
            return head->next;
        }

        cur = temp[temp.size() - n - 1];
        cur->next = cur->next->next;
        return temp[0];
    }
};