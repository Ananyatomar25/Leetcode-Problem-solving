class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        
        unordered_map<char, vector<int>> mp;
        
        for(int i=0;i<t.length();i++){
            mp[t[i]].push_back(i);
        }
        int prev =-1;
        for(auto c: s){
            auto it = mp.find(c);
            if(it == mp.end()) return false;
            auto v = it->second;
            int pos = upper_bound(v.begin(),v.end(),prev) - v.begin();
            if(pos == v.size()) return false;
            prev = v[pos];
        }
        return true;
        
        
//         if(s.size() == 0) return true;  // empty string is always a subsequence
         
//         int i=0,j=0;
        
//         while(i< s.size() && j< t.size()){
//             if(s[i] == t[j]){
//                 i++;
//                 j++;
//             }
//             else if(s[i] != t[j]) j++;
//         }
        
//         if(i == s.size()) return true;
//         return false;
        
    }
};