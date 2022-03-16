class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        
        if(pushed.size() != popped.size()) return false;
        int n = pushed.size();
        int m = popped.size();
        
        stack<int> st;
        int j =0;
        
        for(int i =0;i<n;i++){
            st.push(pushed[i]);
            while(!st.empty() && st.top() == popped[j]){
                st.pop();
                j++;
            }
        }
        
        
       if(st.empty()) return true;
        return false;
    }
};