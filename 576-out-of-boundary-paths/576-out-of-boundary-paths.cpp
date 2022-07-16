class Solution {
public:
    int dp[51][51][52];
    int mod = 1e9+7;
    
    int countPath(int m,int n,int maxMove, int i,int j){
        if(i==m || j==n || i<0 || j<0)
            return 1;
        if(maxMove==0)
            return 0;
        
        int ans =0;
        if(dp[i][j][maxMove]!=-1)
            return dp[i][j][maxMove];
        
        ans = ( ans + countPath(m,n,maxMove-1,i-1,j)) % mod; 
        ans = ( ans + countPath(m,n,maxMove-1,i+1,j)) % mod; 
        ans = ( ans + countPath(m,n,maxMove-1,i,j+1)) % mod; 
        ans = ( ans + countPath(m,n,maxMove-1,i,j-1)) % mod;      
        return dp[i][j][maxMove] = ans;
    }
    
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        memset(dp,-1,sizeof(dp));
        return countPath(m,n,maxMove,startRow,startColumn);
    }
};