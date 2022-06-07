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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        if(l1 == NULL) return l2;
        if(l2 == NULL) return l1;
        
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;
        
        while(l1 != NULL && l2 != NULL){
            if(l1->val <= l2->val){
                ListNode* node = new ListNode(l1->val);
                l1 = l1->next;
                temp->next = node;
                temp = temp->next;
            }
            else{
                ListNode* node = new ListNode(l2->val);
                l2 = l2->next;
                temp->next = node;
                temp = temp->next;
            }
            
        }
        
        if(l1 != NULL) {
            temp->next = l1;
        }
        if(l2 != NULL){
            temp->next = l2;
        }
        
        return dummy->next;
        
    }
};