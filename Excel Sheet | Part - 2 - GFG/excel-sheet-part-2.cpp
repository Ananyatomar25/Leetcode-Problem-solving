// { Driver Code Starts
//Initial template for C++


#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
    public:
    int ExcelColumnNumber(string s)
    {
        int res =0;
        // Your code goes here
        for(int i=0;i<s.length();i++){
            int c = s[i] - 'A' + 1;
            res = res*26 + c;
        }
        
        return res;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.ExcelColumnNumber(s)<<endl;
    }
}  // } Driver Code Ends