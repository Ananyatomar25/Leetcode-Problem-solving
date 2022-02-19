class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        
        int mi = INT_MAX, diff = INT_MAX;
        
        priority_queue <int> pq;
        
        for(auto it: nums){
            if(it%2 != 0) it = it*2;
            mi = min(mi,it);
            pq.push(it);
        }
        
        while(pq.top()%2 == 0){
            int ma = pq.top();
            pq.pop();
            diff = min(diff, ma-mi);
            mi = min(mi, ma/2);
            pq.push(ma/2);
        }
        
        return min(diff, pq.top()-mi);
    }
};