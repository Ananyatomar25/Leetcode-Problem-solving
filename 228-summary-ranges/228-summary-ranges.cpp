class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        
        int n = nums.size();
        int start =0,end=0;
        vector<string> res;
        
        if(n == 0) return res;
        
        for(int i=0;i<n;){
            start = end =i;
            while(end+1 <n && 1+nums[end] == nums[end+1]) end++;
            if(start < end) {
                res.push_back(to_string(nums[start]) + "->" + to_string(nums[end]));
            }
            else {
                res.push_back(to_string(nums[start]));
            }
            
            i = end+1;
        }
        
        return res;
        
    }
};