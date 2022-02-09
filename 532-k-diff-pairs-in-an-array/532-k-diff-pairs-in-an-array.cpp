class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int count =0;
        
        unordered_map<int,int> mp;
        
        for(auto it: nums){
            mp[it]++;
        }
        for(auto it: mp){
            if(k==0){
                if(it.second>1) count++;
            }
            
            else if(mp.find(it.first+k) != mp.end()){
                 count++;
            }
        }
        
        return count;
        
    }
};