class Solution {
public:
    ListNode *findnthNode(ListNode *temp, int k) {
        int cnt = 1;
        while (temp != NULL) {
            if (cnt == k) return temp;
            cnt++;
            temp = temp->next;
        }
        return nullptr;
    }

    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || k == 0) return head;  // Edge cases

        int len = 0;
        ListNode *temp = head;
        while (temp) {  // Find length of linked list
            len++;
            temp = temp->next;
        }

        if (k % len == 0) return head;  // No rotation needed
        k = k % len;

        temp = head;
        while (temp->next) temp = temp->next;  // Move temp to last node
        temp->next = head;  // Make it circular

        ListNode* newlastnode = findnthNode(head, len - k);
        head = newlastnode->next;
        newlastnode->next = nullptr;

        return head;
    }
};
