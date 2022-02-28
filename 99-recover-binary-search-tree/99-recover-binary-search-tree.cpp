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
class Solution {
public:
    
    vector<int> in;
    
    void inorder(TreeNode* node){
        if(node == NULL) return;
        
        inorder(node->left);
        in.push_back(node->val);
        inorder(node->right);
    }
    
    void change(TreeNode* n, int &i){
        if(n == NULL) return;
        change(n->left,i);
        if(n->val != in[i]) {
            n->val = in[i];
            
    }
        i++;
        change(n->right,i);
    }
    
    
    
    void recoverTree(TreeNode* root) {
        inorder(root);
        sort(in.begin(),in.end());
        int i=0;
        change(root,i);
    }
};