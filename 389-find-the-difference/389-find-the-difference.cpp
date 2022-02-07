class Solution {
public:
    char findTheDifference(string s, string t) {
        if(s.length() ==0) return t[0];
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        
        int i=0;
        
        while(i<s.length()){
            if(s[i]!=t[i]) return t[i];
            i++;
        }
        
        return t[t.length()-1];
    }
};