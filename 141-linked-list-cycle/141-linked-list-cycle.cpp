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
    bool hasCycle(ListNode *head) {
        
        
        // if LL contains zero nodes or one node then no cycle can exist
        if(head == NULL || head->next == NULL){
            return false;
        }
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        // move pointer till last node's next
        // is null or second last node's next next is null
        
        while(fast->next && fast->next->next){
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow) return true;
        }
        
        return false;
        
    }
};