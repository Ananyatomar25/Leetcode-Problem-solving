// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:

int dp[30][30],bp[30][30];
string ans;char c;
void print(int i, int j)
{
if (i == j) {
ans += c;
c++;
return;
}
ans += "(";
print(i,bp[i][j]);
print(bp[i][j]+1, j);
ans+=")";
}

int cost(int a,int b,int c)
{
return (a*b*c);
}

int solve(int a[],int i,int j)
{
if(i==j)
return 0;
if(dp[i][j] != 0)
return dp[i][j];
int tans=1e9+7,tempans,idx;
for(int k=i;k<j;k++) {
    dp[i][k]=solve(a,i,k);
    dp[k+1][j]=solve(a,k+1,j);
    tempans=cost(a[i-1],a[k],a[j]) +dp[i][k]+dp[k+1][j];
    if(tans>tempans)
tans=tempans,idx=k;
}
bp[i][j] = idx;
return dp[i][j] = tans;
}
    string matrixChainOrder(int p[], int n){
        // code here
        ans = "";c = 'A';
memset(dp,0,sizeof(dp));
memset(bp,-1,sizeof(bp));
solve(p,1,n-1);
print(1,n-1);
return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int p[n];
        for(int i = 0;i < n;i++)
            cin>>p[i];
        
        Solution ob;
        cout<<ob.matrixChainOrder(p, n)<<"\n";
    }
    return 0;
}  // } Driver Code Ends