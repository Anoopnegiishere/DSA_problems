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
     ListNode* removeElements(ListNode* head, int val) {
        ListNode* start = head;
        if(head == NULL) return NULL;
        while(start->next != NULL){
            if(start->next->val == val) start->next = start->next->next;
            else start = start->next;
        }
        if(head->val == val) head = head->next;
        return head;
    }
};
