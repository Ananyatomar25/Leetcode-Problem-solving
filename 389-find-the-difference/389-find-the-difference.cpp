class Solution {
public:
    char findTheDifference(string s, string t) {
        if(s.length() ==0) return t[0];
        char v = 0;
        
        for(auto it: s) v = v^it;
        for(auto it: t) v = v^it;
        
        return v;
    }
};