class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left =0,sum=0;
        int mi=INT_MAX;
        
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            
            while(sum>=target){
                mi = min(mi,i-left+1);
                sum-=nums[left];
                left++;
            }
        }
        
        return (mi==INT_MAX?0:mi);
    }
};