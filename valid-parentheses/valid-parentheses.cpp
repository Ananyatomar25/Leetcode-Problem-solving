class Solution {
public:
    bool isValid(string s) {
        stack <int> stk;
        for(int i=0;i<s.length();i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                stk.push(s[i]);
                continue;
            } if(stk.empty()) 
                return false;
            char x = stk.top();
            
            if((x=='(' && s[i]==')') || (x=='{' && s[i]=='}') || (x=='[' && s[i]==']'))
             stk.pop();
            else
            return false;
        }
        if(stk.empty()) return true;
        return false;
        
    }
};
