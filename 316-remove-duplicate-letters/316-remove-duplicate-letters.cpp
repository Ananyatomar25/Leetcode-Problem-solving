class Solution {
public:
    string removeDuplicateLetters(string s) {
        
        string res = "";
        vector<int> last_index(26,0);
        vector<bool> seen(26,false);
        stack<char> st;
        
        
        for(int i =0;i<s.size();i++){
            last_index[s[i] - 'a'] =i;
        }
        
        for(int i=0;i<s.size();i++){
            
            int curr = s[i] - 'a';
            
            if(seen[curr]) continue;
            
            while(!st.empty() && st.top() > s[i] && last_index[st.top() - 'a'] > i){
                seen[st.top() - 'a'] = false;
                st.pop();
            }
            st.push(s[i]);
            seen[curr] = true;
            
        }
        
        while(!st.empty()){
            res = st.top() + res;
            st.pop();
        }
        
        return res;
        
    }
};