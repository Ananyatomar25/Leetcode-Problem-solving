// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    string ans;
	    
	    vector<int> v(26, 0);
	    
	    queue<char> q;
	    
	    for(auto x : A)
	    {
	        int i = x - 'a';

	        if(v[i] == 1)
	            v[i] = 2;
	            
	        else if(v[i] == 0)
	        {
	            v[i] = 1;
	            q.push(x);
	        }
	        
	        while(!q.empty() && v[q.front() - 'a'] == 2)
	            q.pop();
	            
	        if(q.empty())
	            ans.push_back('#');
	        else
	            ans.push_back(q.front());
	    }
	    
	    return ans;
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends