class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count =0;
        unordered_map <int,int> mp;
        int sum =0;
        mp[0] =1;
        
        for(auto it: nums){
            sum = sum+it;
            if(mp.find(sum-k) != mp.end()) count += mp[sum-k];
            mp[sum]++;
        }
        return count;
    }
};