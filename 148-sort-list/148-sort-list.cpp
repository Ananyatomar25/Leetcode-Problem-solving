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
    
    int length(ListNode* node){
        int len =0;
        while(node != NULL){
            node = node->next;
            len++;
        }
        return len;
    }
    
    ListNode* sortList(ListNode* head) {
        
        if(head == NULL) return NULL;
        
        int len = length(head);
        
        if(len == 1) return head;
        
        vector<int> arr;
        int i=0;
        
        while(head != NULL){
            arr.push_back(head->val);
            head = head->next;
        }
        
        sort(arr.begin(),arr.end());
        
        ListNode* head2 = new ListNode(arr[0]);
        ListNode* temp = head2;
        
        for(int i=1;i<len;i++){
            ListNode* node = new ListNode(arr[i]);
            temp->next = node;
            temp = node;
        }
        
        return head2;
        
    }
};