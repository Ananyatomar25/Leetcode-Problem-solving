class Solution {
public:
     vector<vector<int>> ans;
    
    void helper(vector<int>& nums, vector<int> subset, int index){
        
        int n = nums.size();
        if(index == n){
            ans.push_back(subset);
            return;
        } 
            helper(nums,subset,index+1);
            subset.push_back(nums[index]);
            helper(nums,subset,index+1);
        
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> subset;
        helper(nums,subset,0);
        return ans;
        
    }
};