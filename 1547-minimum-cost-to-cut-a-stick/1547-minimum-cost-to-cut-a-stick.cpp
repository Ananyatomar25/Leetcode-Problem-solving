class Solution {
public:
    
    int func(vector<int> &cuts,int i,int j, vector<vector<int>> &dp){
        if(i>j) return 0;
        int m=INT_MAX;
        if(dp[i][j] != -1) return dp[i][j];
        for(int k=i;k<=j;k++){
            int cost=cuts[j+1]-cuts[i-1]+func(cuts,i,k-1,dp)+func(cuts,k+1,j,dp);
            m=min(m,cost);
        }
        return dp[i][j] = m;
    }
    
    int minCost(int n, vector<int>& cuts) {
        sort(cuts.begin(),cuts.end());
        cuts.push_back(n);
        cuts.insert(cuts.begin(),0);
        int c = cuts.size();
        vector<vector<int>> dp(c+1, vector<int>(c+1,-1));
        return func(cuts,1,c-2, dp);
    }
};