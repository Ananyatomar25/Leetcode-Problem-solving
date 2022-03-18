class Solution {
public:
    int scoreOfParentheses(string s) {
        
        int res =0;
        stack<char> st;
        
        
        for(int i =0;i<s.size();i++){
            if(s[i] == '(') {
                st.push(res);
                res = 0;
            } 
            else if(s[i] == ')'){
                res = st.top() + max(2*res, 1);
                st.pop();
            }
        }
        return res;
        
    }
};