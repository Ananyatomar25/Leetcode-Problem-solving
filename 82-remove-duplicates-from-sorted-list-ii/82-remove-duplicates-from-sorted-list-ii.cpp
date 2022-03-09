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
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(head == NULL || head->next == NULL) return head;
        if(head->next->next == NULL && head->val == head->next->val) return NULL;
        ListNode* curr = new ListNode(-1);
        curr->next = head;
        
        ListNode* first = head;
        ListNode* prev = curr;
        
        while(first != NULL && first->next){
                if(first->val != first->next->val){
                prev = first;
                first = first->next;
                    continue;
            }
                while(first->next != NULL && first->val == first->next->val){
                    first = first->next;
                }
                prev->next = first->next;
                first = prev->next;
            }
        return curr->next;
    }
};