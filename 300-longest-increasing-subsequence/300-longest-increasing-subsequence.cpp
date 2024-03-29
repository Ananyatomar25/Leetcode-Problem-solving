class Solution {
public:
    
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        
        vector<int> dp(n,1);
        
        for(int ind = 0;ind < n;ind++){
            for(int prev = 0; prev < ind;prev++){
                if(nums[ind] > nums[prev]){
                    dp[ind] = max(dp[ind], 1 + dp[prev]);
                }
            }
        }
        int maxi = 0;
        
        for(int i=0;i<n;i++){
            maxi = max(maxi, dp[i]);
        }
        
        return maxi;
        
    }
};