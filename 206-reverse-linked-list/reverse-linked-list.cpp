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
    ListNode* reverseList(ListNode* head) {
        ListNode *p = nullptr, *c = head, *n = nullptr;  // ✅ Correct initialization

        while (c != nullptr) {  // ✅ Correct loop condition
            n = c->next;  // Store next node
            c->next = p;  // Reverse pointer
            p = c;        // Move `p` to current node
            c = n;        // Move `c` to next node
        }

        return p;  // ✅ `p` now points to the new head
    }
};
