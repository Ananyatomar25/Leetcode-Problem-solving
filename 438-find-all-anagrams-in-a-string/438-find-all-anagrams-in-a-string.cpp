class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        
        int n = p.length();
        int m = s.length();
        if(n>m) return ans;
        
        vector<int> pvec(26,0), svec(26,0);
        
        for(int i=0;i<n;i++){
            pvec[p[i]-'a']++;
        }
        int i=0,j=0;
        
        while(j<m){
            svec[s[j]-'a']++;
            
            if(j-i+1 < n) j++;
            else if(j-i+1 == n){
                if(pvec==svec) ans.push_back(i);
                svec[s[i]-'a']--;
                i++;
                j++;
            }
        }
        
        return ans;
        
    }
};