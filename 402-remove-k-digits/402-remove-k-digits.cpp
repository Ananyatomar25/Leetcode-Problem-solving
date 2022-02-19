class Solution {
public:
    string removeKdigits(string num, int k) {
        
        if(k >= num.length()) return "0";
        
        stack<char> s;
        
        for(int i=0;i<num.length();i++){
            if(s.empty()) s.push(num[i]);
            else{
                while(!s.empty() && k > 0 && s.top() > num[i]){
                    s.pop();
                    k--;
                }
                s.push(num[i]);
            }
        }
        
        while(k > 0){
            s.pop();
            k--;
        }
        
        if(s.empty()) return "0";
        
        string ans;
        while(!s.empty()){
            ans = s.top()+ans;
            s.pop();
        }
        
        int i=0;
        while(ans[i] == '0'){
            i++;
        }
        
        return (ans.substr(i) == "")? "0" :ans.substr(i); 
        
    }
};