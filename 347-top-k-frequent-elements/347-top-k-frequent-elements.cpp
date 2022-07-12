class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        vector<int> ans;
        unordered_map<int, int> mpp;
        for(auto it: nums) mpp[it]++;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int,int>>> pq;
        for(auto it: mpp) 
        {
            pq.push(make_pair(it.second, it.first));
            if(pq.size() > k) pq.pop();
        }
        while(k--)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
        
    }
};