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
    
    int height(TreeNode* node){
        if(node==NULL) return 0;
        
        int lh = height(node->left);
        if(lh == -1) return -1;
        int rh = height(node->right);
        if(rh == -1) return -1;
        if(abs(lh-rh)>1) return -1;
        return (1+max(lh,rh));
        
    }
    
    ///---takes O(N^2) to compute lh and rh
    
    
    //  int Lheight(TreeNode* node){
    //      if(node == NULL) return 0;
    //      else return (1+max(Lheight(node->left), Lheight(node->right)));
    //  }
    // int Rheight(TreeNode* node){
    //      if(node == NULL) return 0;
    //      else return (1+max(Rheight(node->left), Rheight(node->right)));
    //  }
    
    
    
    
    bool isBalanced(TreeNode* root) {
//         if(root==NULL) return true;
        
//         int l = Lheight(root->left);
//         int r = Rheight(root->right);
        
//         if(abs(l-r)>1) return false;
        
//         bool ll = isBalanced(root->left);
//         bool rr = isBalanced(root->right);
        
//         if(ll==false || rr == false) return false;
        
//         return true;
        
        
        
        
        
        // O(N) solution
        
        
        return (height(root)!= -1);
        
        
        
    }
};