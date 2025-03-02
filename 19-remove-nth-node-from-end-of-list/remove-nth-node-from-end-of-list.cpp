class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head == NULL || head->next == NULL) return NULL; // Handle edge case
        
        int count = 0;
        ListNode* temp = head;

        // Count total nodes
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }

        int i = count - n; // Position to remove

        // If head node needs to be deleted
        if (i == 0) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

        // Traverse to (i-1)th node
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
