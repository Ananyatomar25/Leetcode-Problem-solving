class Solution {
public:
    
    int f(int ind, vector<int> &prices, int buy, int fee, vector<vector<int>> &dp){
        int n = prices.size();
        if(ind == n) return 0;
        int profit = 0;
        
        if(dp[ind][buy] != -1) return dp[ind][buy];
        
        if(buy == 1){
            profit = max((-prices[ind] + f(ind+1,prices,0,fee,dp)), f(ind+1, prices, 1, fee,dp));
        }
        else{
            profit = max((prices[ind] - fee + f(ind+1,prices,1,fee,dp)), f(ind+1, prices, 0, fee,dp));
        }
        
        return dp[ind][buy] = profit;
    }
    
    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();
        vector<vector<int>> dp(n, vector<int>(2, -1));
        return f(0, prices, 1, fee, dp);
    }
};