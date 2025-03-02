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
    ListNode* deleteMiddle(ListNode* head) {
         if (head == NULL || head->next == NULL) return NULL; // Handle edge case
        
        int count = 0;
        ListNode* temp = head;

        // Count total nodes
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }

        int i = count/2;
       
       
        ListNode* second = head;
        for (int j = 0; j < i - 1; j++) {
            second = second->next;
        }

        // Delete the target node
        if (second->next != NULL) {
            ListNode* deleteNode = second->next;
            second->next = second->next->next;
            delete deleteNode;
        }

        return head;
    }
};