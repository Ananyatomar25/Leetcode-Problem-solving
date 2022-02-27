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
    
    bool findTarget(TreeNode* root, int k) {
        inorder(root);
        int i = 0;
        int j = in.size()-1;
        
        while(i<j){
            if(in[i] + in[j] == k) return true;
            else if(in[i] + in[j] < k) i++;
            else j--;
        }
        
        return false;
    }
};