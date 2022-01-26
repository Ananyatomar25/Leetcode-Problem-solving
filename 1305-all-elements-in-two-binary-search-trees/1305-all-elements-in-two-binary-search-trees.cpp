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
    
    void inorder(TreeNode* node1,vector<int>& ans){
        if(node1==NULL) return;
        inorder(node1->left,ans);
        ans.push_back(node1->val);
        inorder(node1->right,ans);
    }
    
//     void inorderOfSecond(TreeNode* node2,vector<int>& in2){
//         if(node2==NULL) return;
//         inorderOfSecond(node2->left,in2);
//         in2.push_back(node2->val);
//         inorderOfSecond(node2->right,in2);
//     }
    
    
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> ans;
        // if(root1 == NULL && root2 == NULL) return ans;
        // vector<int> in1;
        // vector<int> in2;
       
        
        inorder(root1,ans);
        inorder(root2,ans);
//         if(root1 == NULL)return in2;
//         if(root2 ==NULL) return in1;
        
//         int n1 = in1.size();
//         int n2 = in2.size();
         
//         int i=0,j=0;
        
//         while(i<n1 && j<n2){
//             if(in1[i]<in2[j]){
//                 ans.push_back(in1[i]);
//                 i++;
//             }
//             else if(in1[i]>=in2[j]){
//                 ans.push_back(in2[j]);
//                 j++;
//             }
//         }
        
//         for(;i<n1;i++) ans.push_back(in1[i]);
//         for(;j<n2;j++) ans.push_back(in2[j]);
        sort(ans.begin(),ans.end());
        
        return ans;
        
        
        
        
    }
};