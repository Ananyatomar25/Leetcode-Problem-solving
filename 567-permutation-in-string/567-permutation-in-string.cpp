class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.length();
        int m = s2.length();
        if(n>m) return false;
        
        vector<int> s1vec(26,0), s2vec(26,0);
        
        for(int i=0;i<n;i++){
            s1vec[s1[i]-'a']++;
        }
        int i=0,j=0;
        
        while(j<m){
            s2vec[s2[j]-'a']++;
            
            if(j-i+1 < n) j++;
            else if(j-i+1 == n){
                if(s1vec==s2vec) return true;
                s2vec[s2[i]-'a']--;
                i++;
                j++;
            }
        }
        
        return false;
        
    }
};