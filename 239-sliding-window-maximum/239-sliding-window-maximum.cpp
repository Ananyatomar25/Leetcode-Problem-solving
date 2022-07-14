class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        int n = nums.size();
        deque<int> dq;
        vector<int> ans;
        if(n == 0) return ans;
        if(n == 1 || k==1) return nums;
        
        for(int i=0;i<n;i++){
            
            if(!dq.empty() && dq.front() == i-k) dq.pop_front();
            
            while(!dq.empty() && nums[dq.back()] < nums[i]) dq.pop_back();
            
            dq.push_back(i);
               
            
            if(i >= k-1 ) ans.push_back(nums[dq.front()]);
            
        }
        
        return ans;
        
    }
};