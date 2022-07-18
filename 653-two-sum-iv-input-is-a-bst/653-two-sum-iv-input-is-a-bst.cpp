/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class BSTIterator {
    
    stack<TreeNode*> s;
    bool reverse = true;
public:
    BSTIterator(TreeNode* root, bool isReverse) {
        reverse = isReverse;
        pushAll(root);
    }
    
    int next() {
        
        TreeNode* temp = s.top();
        s.pop();
        if(reverse == false){
            pushAll(temp->right);
        }
        else pushAll(temp->left);
        
        return temp->val;
        
    }
    
    bool hasNext() {
        return !s.empty();
    }
    
    void pushAll(TreeNode* node){
        if(reverse == false){
            while(node){
            s.push(node);
            node = node->left;
        }
        }
        else {
             while(node){
            s.push(node);
            node = node->right;
        }
        }
        
    }
};
class Solution {
public:
   
    
    bool findTarget(TreeNode* root, int k) {
        if(root == NULL) return false;
        
        BSTIterator l(root,false);
        BSTIterator r(root,true);
        
        int i = l.next();
        int j = r.next();
        
        while(i < j){
            if( i + j == k) return true;
            else if( i + j < k) i=l.next();
            else j = r.next();
        }
        return false;
    }
};