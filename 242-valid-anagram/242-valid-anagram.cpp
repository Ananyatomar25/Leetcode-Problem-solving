class Solution {
public:
    bool isAnagram(string s, string t) {
        
       if (s.length() != t.length()) return false;
        int n = s.length();
        //constant space
        int counts[26] = {0};
        //O(n) time
        for (int i = 0; i < n; i++) { 
            counts[s[i] - 'a']++;
            counts[t[i] - 'a']--;
        }
        for (int i = 0; i < 26; i++)
            if (counts[i]) return false;
        return true;
        
    }
};