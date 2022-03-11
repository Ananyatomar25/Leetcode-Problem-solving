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
    ListNode* rotateRight(ListNode* head, int k) {
        
        // checking for edge cases
        // 1. if head is null i.e. LL has zero nodes
        // 2. if head->next is null i.e. LL has only one node
        // 3. if k == 0 i.e. no rotations
        
        if(head == NULL || head->next == NULL || k == 0) return head;
        
        // calculating length of LL
        
        ListNode* curr = head;
        
        int len = 1;
        
        while(curr->next != NULL && ++len){
            curr = curr->next;
        }
        
        // making LL a circular LL
        
        curr->next = head;
        
        k = k % len;
        k = len - k;
        
        while(k--) curr = curr->next;
        
        //making the node as head and breaking link
        
        head = curr->next ;
        curr->next = NULL;
        
        return head;
    }
};