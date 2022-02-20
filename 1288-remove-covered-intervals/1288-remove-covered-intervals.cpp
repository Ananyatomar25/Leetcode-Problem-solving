class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        
        int ans =0;
        int left = -1, right =-1;
        sort(intervals.begin(),intervals.end());
        
        for(auto it: intervals){
            if(it[0]> left && it[1] > right){
                ans++;
                left = it[0];
            }
            right = max(right,it[1]);
        }
        
        return ans;
        
    }
};