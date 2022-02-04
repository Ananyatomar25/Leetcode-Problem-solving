class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> mp;
        int sum =0;
        int ma = 0;
        mp[0]= -1;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) sum += -1;
            else if(nums[i] == 1) sum += 1;
            
            if(mp.find(sum) != mp.end()){
                int idx = mp[sum];
                int len = i-idx;
                ma = max(ma,len);
            }
            else mp[sum] =i;
        }
        
        return ma;
    }
};