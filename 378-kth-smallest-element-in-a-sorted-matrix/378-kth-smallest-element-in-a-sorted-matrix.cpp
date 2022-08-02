class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        
        int n = matrix.size();
        int m = matrix[0].size();
       
        priority_queue<vector<int>, vector<vector<int>>, greater<>> pq;
        
        for(int i=0;i<n;i++){
            pq.push({matrix[i][0], i, 0});
        }
        
        int ans = 0;
        
        for(int i=1;i<=k;i++){
            vector<int> top = pq.top();
            pq.pop();
            ans = top[0];
            int row = top[1];
            int col = top[2];
            
            if(col+1 < m){
                pq.push({matrix[row][col+1], row, col+1});
            }
        }
        
        return ans;
        
    }
};