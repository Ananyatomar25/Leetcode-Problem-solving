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
    int widthOfBinaryTree(TreeNode* root) {
        if(root == NULL) return 0;
        int ans =0;
        queue<pair<TreeNode*,int>> q;
        q.push({root,0});
        
        while(!q.empty()){
            int n = q.size();
            int mi = q.front().second;
            int last,first;
            
            for(int i=0;i<n;i++){
                int curr_idx = q.front().second-mi;
                TreeNode* node = q.front().first;
                q.pop();
                if(i==0) first = curr_idx;
                if(i==n-1) last = curr_idx;
                if(node->left) q.push({node->left,curr_idx*2 +1});
                if(node->right) q.push({node->right,curr_idx*2 +2});
            }
            ans = max(ans,last-first+1);
        }
        
        return ans;
    }
};