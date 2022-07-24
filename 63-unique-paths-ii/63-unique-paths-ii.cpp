class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& nums) {
        
        int m = nums.size();
        int n = nums[0].size();
        
        if(nums[0][0] == 1 || nums[m-1][n-1] == 1) return 0;
        
        vector<vector<int>> dp(m, vector<int>(n,-1));
        
        dp[0][0] = 1;
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i == 0 && j== 0) continue;
                else {
                    int up =0, left = 0;
                    if(i >0 && nums[i-1][j] == 0){
                        up = dp[i-1][j];
                    }
                    if(j > 0 && nums[i][j-1] == 0){
                        left = dp[i][j-1];
                    }
                    dp[i][j] = up + left;
                }
            }
        }
        return dp[m-1][n-1];
    }
};