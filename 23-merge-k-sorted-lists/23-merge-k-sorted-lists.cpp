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


class mycompare{
    public:
    bool operator()(const ListNode* a, const ListNode* b){
        return (a->val > b->val);
    }
};



class Solution {
public:
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        ListNode* head = new ListNode(0);
        ListNode* temp = head;
        priority_queue<ListNode*, vector<ListNode*>,mycompare> pq;
        
        for(int i=0;i<lists.size();i++){
            if(lists[i]!=NULL)
                pq.push(lists[i]);
        }
        
        while(!pq.empty()){
            ListNode* node = pq.top();
            pq.pop();
            temp->next = node;
            temp = node;
            if(node->next) pq.push(node->next);
        }
        
        
    return head->next;
        
        
    }
};