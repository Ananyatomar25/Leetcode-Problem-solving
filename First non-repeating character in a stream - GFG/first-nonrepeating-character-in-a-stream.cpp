// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    string output;
	    
	    vector<int> vect(26, 0);
	    
	    queue<char> mq;
	    
	    for(auto x : A)
	    {
	        int idx = x - 'a';

	        if(vect[idx] == 1)
	            vect[idx] = 2;
	            
	        else if(vect[idx] == 0)
	        {
	            vect[idx] = 1;
	            mq.push(x);
	        }
	        
	        while(!mq.empty() and vect[mq.front() - 'a'] == 2)
	            mq.pop();
	            
	        if(mq.empty())
	            output.push_back('#');
	        else
	            output.push_back(mq.front());
	    }
	    
	    return output;
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