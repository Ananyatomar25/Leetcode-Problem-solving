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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> temp;
        ListNode* head = new ListNode(0);
        ListNode* t = head;
        for(int i=0;i<lists.size();i++){
            ListNode* node= lists[i];
            while(node!=NULL){
                temp.push_back(node->val);
                node = node->next;
            }
        }
        
        
        sort(temp.begin(),temp.end());
        for(auto it:temp){
            ListNode* n = new ListNode(it);
            t->next = n;
            t = n;
        }
        
        return head->next;
        
        
    }
};