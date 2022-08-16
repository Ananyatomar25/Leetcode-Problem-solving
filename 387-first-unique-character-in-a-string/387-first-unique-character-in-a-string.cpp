class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.size();
        unordered_map<char, pair<int, int>> mp;
        
        for(int i=0;i<n;i++){
            mp[s[i]].first += 1;
            mp[s[i]].second = i;
        }
        
        int ans = INT_MAX;
        
        for(const auto& [c, p] : mp){
            if(p.first == 1){
                ans = min(ans, p.second);
            }
        }
        return ans == INT_MAX ? -1 : ans;
    }
};