// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:

string repeat(string s, int n) {
  string repeat;

  for (int i = 0; i < n; i++)
    repeat += s;

  return repeat;
}
    string decodedString(string s){
        int curr_num =0;
        string curr_string ="";
        stack<string> sts;
        stack<int> sti;
        
        for(int i=0;i<s.length();i++){
            if(s[i]=='['){
                sti.push(curr_num);
                sts.push(curr_string);
                curr_num=0;
                curr_string="";
            }
            else if(s[i]==']'){
                string prev_string =sts.top();
                sts.pop();
                int prev_num=sti.top();
                sti.pop();
                curr_string = prev_string + repeat(curr_string, prev_num);
            }
            else if(isdigit(s[i])){
                curr_num= curr_num*10 + (s[i]-'0');
            }
            else{
                curr_string+=s[i];
            }
        }
        
        return curr_string;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}  // } Driver Code Ends