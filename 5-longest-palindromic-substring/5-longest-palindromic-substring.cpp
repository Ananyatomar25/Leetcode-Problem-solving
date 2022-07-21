class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        if(n == 1) return s;
        int dp[n][n];
        memset(dp, 0, sizeof(dp));
        int maxLen = 0;
        int start =0;
        
        for(int g = 0; g<n;g++){
            for(int i=0,j=g; j<n;j++,i++){
                if(g == 0){
                    dp[i][j] = 1;
                }
                else if(g == 1){
                    if(s[i] == s[j]){
                        dp[i][j] = 1;
                    }
                    else dp[i][j] = 0;
                }
                else{
                    if(s[i] == s[j] && dp[i+1][j-1] == 1){
                        dp[i][j] =1;
                    }
                    else dp[i][j] =0;
                }
                if(dp[i][j] == 1){
                    start = i;
                    maxLen = g+1;
                }
            }
        }
        
        string ans = s.substr(start, maxLen);
        return ans;
    }
};