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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummyhead(0);
        ListNode *dummytail=&dummyhead;
        while(list1!=NULL && list2!=NULL){
            if(list1->val<=list2->val){
                dummytail->next=list1;
                list1=list1->next;
            }
            else{
                dummytail->next=list2;
                list2=list2->next;
            }
            dummytail=dummytail->next;
        }
        if(list1){
            dummytail->next=list1;
        }
        if(list2){
            dummytail->next=list2;
        }
        return dummyhead.next;
    }
};