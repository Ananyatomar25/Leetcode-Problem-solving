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
    
    bool check(TreeNode* root, TreeNode* mi, TreeNode* ma){
        
        if(root == NULL) return true;
        
        if((mi && root->val <= mi->val) || (ma && root->val >= ma->val)) return false;
        
        return check(root->left, mi, root) && check(root->right, root, ma);
    }
    
    bool isValidBST(TreeNode* root) {
        
        return check(root,NULL, NULL);
    }
};