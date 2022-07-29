class Solution {
public:
    
    bool allStars(int i, string &p){
        for(int j = 0; j <= i; j++){
            if(p[j] != '*') return false;
        }
        return true;
    }
    
    bool f(int i, int j, string &p, string &s, vector<vector<int>> &dp){
        
        if(i < 0 && j < 0) return true;
        if(i < 0 && j >= 0) return false;
        if(j < 0 && i >= 0) return allStars(i, p);
        
        if(dp[i][j] != -1) return dp[i][j];
        
        if(p[i] == s[j] || p[i] == '?'){
            return dp[i][j] = f(i-1, j-1, p, s, dp);
        }
        if(p[i] == '*'){
            return dp[i][j] = (f(i-1, j, p, s, dp) || f(i, j-1, p, s, dp));
        }
        else return dp[i][j] = false;
    }
    
    bool isMatch(string s, string p) {
        int m = s.size();
        int n = p.size();
        
        vector<vector<int>> dp(n, vector<int>(m, -1));
        
        return f(n-1, m-1, p, s, dp);
    }
};