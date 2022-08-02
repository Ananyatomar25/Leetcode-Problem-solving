class Solution {
public:
    int recur(int ind, int buy, int cnt, vector<int>& prices, vector<vector<vector<int>>> &dp){
        int n = prices.size();
        if(cnt <= 0) return 0;
        if(ind >= n) return 0;
        
        if(dp[ind][buy][cnt] != -1) return dp[ind][buy][cnt];
        
        int profit = 0;
        
        if(buy == 1){
            profit = max(-prices[ind] + recur(ind+1, 0, cnt, prices, dp),
                        recur(ind+1, 1, cnt, prices, dp));
        }
        else{
            profit = max(prices[ind] + recur(ind+1, 1, cnt-1, prices, dp),
                        recur(ind+1, 0, cnt, prices, dp));
        }
        
        return dp[ind][buy][cnt] = profit;
    }
    
    int maxProfit(int k, vector<int>& prices) {
        
        int n = prices.size();
        vector<vector<vector<int>>> dp(n+1, vector<vector<int>>(2, vector<int>(k+1, -1)));
        
        return recur(0, 1, k, prices, dp);
    }
};